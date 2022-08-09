#include <iostream>

#include "matrix.h"

using namespace std;

double Matrix::getValueAt(double** matrix, int row, int col) const {
    return *(*(matrix + row) + col);
}

void Matrix::setValueAt(double** matrix, int row, int col, double value) {
    *(*(matrix + row) + col) = value;
}

Matrix::Matrix(double** data, int order) {
    this->order = order;
    this->mat = new double*[order];
    for (int i = 0; i < order; i++) {
        this->mat[i] = new double[order];
        for (int j = 0; j < order; j++) {
            this->setValueAt(this->mat, i, j, this->getValueAt(data, i, j));
        }
    }
}

Matrix* Matrix::multiplication(Matrix &other) {
    if (other.order != this->order) {
        cout
        << "Not possible to perform multiplication of a "
        << this->order << " order matrix with a " << other.order << " order matrix." << endl;
        return nullptr;
    }

    double** result = new double*[this->order];
    for (int i = 0; i < this->order; i++) {
        result[i] = new double[this->order];
        for (int j = 0; j < this->order; j++) {
            this->setValueAt(result, i, j, 0);
            for (int k = 0; k < this->order; k++) {
                double cij = this->getValueAt(result, i, j);
                double aik = this->getValueAt(this->mat, i, k);
                double bkj = other.getValueAt(other.mat, k, j);
                this->setValueAt(result, i, j, cij + aik * bkj);
            }
        }
    }

    return new Matrix(result, this->order);
}

double** Matrix::findCofactor(double** matrix, int rowNo, int colNo, int currentOrder) {
    double** cofactor = new double*[currentOrder - 1];
    for (int i = 0; i < currentOrder; i++)
        cofactor[i] = new double[currentOrder - 1];

    int i = 0, j = 0;
    for (int row = 0; row < currentOrder; row++) {
        for (int col = 0; col < currentOrder; col++) {
            if (row != rowNo && col != colNo) {
                this->setValueAt(cofactor, i, j++, this->getValueAt(matrix, row, col));
                if (j == currentOrder - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }

    return cofactor;
}

double Matrix::determinant(double** matrix, int currentOrder) {
    double result = 0;

    if (currentOrder == 1)
        return this->getValueAt(matrix, 0, 0);

    int sign = 1;

    for (int i = 0; i < currentOrder; i++) {
        double** temp = findCofactor(matrix, 0, i, currentOrder);
        result += sign * matrix[0][i] * determinant(temp, currentOrder - 1);
        sign = -sign;
    }

    return result;
}

double Matrix::determinant(double** matrix) {
    return this->determinant(matrix, this->order);
}

bool Matrix::isInverseExists(double** matrix) {
    double det = this->determinant(this->mat);
    return (int)det != 0;
}

double** Matrix::adjoint(double** matrix) {
    double** adj = new double*[this->order];
    for (int i = 0; i < this->order; i++)
        adj[i] = new double[this->order];

    if (this->order == 1) {
        adj[0][0] = 1;
        return adj;
    }

    int sign = 1;

    for (int i = 0; i < this->order; i++) {
        for (int j = 0; j < this->order; j++) {
            // Get cofactor of A[i][j]
            auto temp = findCofactor(matrix, i, j, this->order);
            sign = ((i + j) % 2 == 0) ? 1: -1;
            adj[j][i] = (sign) * (determinant(temp, this->order - 1));
        }
    }

    return adj;
}

Matrix* Matrix::inverse(double** matrix) {
    if (!this->isInverseExists(this->mat)) {
        cout << "Determinant is zero. Hence inverse doesn't exists!" << endl;
        return nullptr;
    }

    double det = this->determinant(matrix);

    double** adj = adjoint(matrix);
    auto** inverse = new double*[this->order];
    for (int i = 0; i < this->order; i++)
        inverse[i] = new double[this->order];

    for (int i = 0; i < this->order; i++)
        for (int j = 0; j < this->order; j++)
            inverse[i][j] = adj[i][j] / det;

    return new Matrix(inverse, this->order);
}

void Matrix::print(double** matrix) {
    for (int i = 0; i < this->order; i++) {
        for (int j = 0; j < this->order; j++)
            cout << this->getValueAt(matrix, i, j) << ' ';
        cout << endl;
    }
}



#include <iostream>
#include <fstream>

#include "matrix.h"

using namespace std;

int main(int argc, char** argv) {
    std::ifstream input;
    input.open("input.txt");
    if (!input.is_open()) {
        cout << "Can't read file" << endl;
        return -1;
    }

    int n1;
    input >> n1;
    double** mat1 = new double*[n1];
    for (int i = 0; i < n1; i++) {
        mat1[i] = new double[n1];
        for (int j = 0; j < n1; j++) {
            input >> mat1[i][j];
        }
    }

    int n2;
    input >> n2;
    double** mat2 = new double*[n2];
    for (int i = 0; i < n2; i++) {
        mat2[i] = new double[n2];
        for (int j = 0; j < n2; j++) {
            input >> mat2[i][j];
        }
    }


    Matrix matrix1(mat1, n1);
    Matrix matrix2(mat2, n2);

    cout << "Matrix 1 is as follows: " << endl;
    matrix1.print(matrix1.mat);
    cout << "Matrix 2 is as follows: " << endl;
    matrix2.print(matrix2.mat);

    cout << "Determinant of matrix 1 is as follows: " << endl;
    cout << matrix1.determinant(matrix1.mat) << endl;
    cout << "Determinant of matrix 2 is as follows: " << endl;
    cout << matrix2.determinant(matrix2.mat) << endl;


    Matrix& result = *matrix1.multiplication(matrix2);
    cout << "Multiplication of matrix 1 & matrix 2 is as follows: " << endl;
    result.print(result.mat);

    cout << "Inverse of matrix 1 is as follows: " << endl;
    Matrix& inv = *matrix1.inverse(matrix1.mat);
    inv.print(inv.mat);

    return 0;
}

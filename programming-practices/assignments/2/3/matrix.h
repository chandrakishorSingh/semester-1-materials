class Matrix {
private:
    double** findCofactor(double** matrix, int i, int j, int currentOrder);
    double determinant(double** matrix, int currentOrder);
    bool isInverseExists(double** matrix);
    double** adjoint(double** matrix);

public:
    int order{};
    double** mat;

    Matrix(double** data, int order);

    Matrix* multiplication(Matrix& other);

    double determinant(double** matrix);

    Matrix* inverse(double** matrix);

    void print(double** matrix);

    double getValueAt(double** matrix, int row, int col) const;
    void setValueAt(double** matrix, int row, int col, double value);
};

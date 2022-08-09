#include <iomanip>
#include "iostream"
#include "vector"

using namespace std;

#define MAX_THREAD 8
#define MAX_SIZE 8

// function to initialize the matrix with random integer values between 0 - MAX_SIZE * MAX_SIZE
void initializeRandomMatrix(vector<vector<int>>& mat, int size) {
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            mat[i][j] = random() % (10);
}

// function to print the matrix
void printMatrix(vector<vector<int>>& mat) {
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[0].size(); j++)
            cout << setw(2) << mat[i][j] << ' ';
        cout << endl;
    }
    cout << endl;
}

int main() {
    // create two matrices matA, matB of order MAX_SIZE
    vector<vector<int>> matA(MAX_SIZE, vector<int>(MAX_SIZE));
    vector<vector<int>> matB(MAX_SIZE, vector<int>(MAX_SIZE));
    vector<vector<int>> matC(MAX_SIZE, vector<int>(MAX_SIZE));

    // initialize both matrices with random integer values
    initializeRandomMatrix(matA, MAX_SIZE);
    initializeRandomMatrix(matB, MAX_SIZE);

    // print both matrices
    cout << "Matrix A" << endl;
    printMatrix(matA);
    cout << "Matrix B" << endl;
    printMatrix(matB);

    // do serial multiplication
    for (int i = 0; i < MAX_SIZE; i++)
        for (int j = 0; j < MAX_SIZE; j++)
            for (int k = 0; k < MAX_SIZE; k++)
                matC[i][j] += matA[i][k] * matB[k][j];

    // print the resultant matrix
    cout << "Matrix C" << endl;
    printMatrix(matC);

    return 0;
}

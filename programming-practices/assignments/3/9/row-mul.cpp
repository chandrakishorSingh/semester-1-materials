#include <iomanip>
#include "iostream"
#include "vector"

using namespace std;

#define MAX_THREAD 8
#define MAX_SIZE 8

// create two matrices matA, matB of order MAX_SIZE
vector<vector<int>> matA(MAX_SIZE, vector<int>(MAX_SIZE));
vector<vector<int>> matB(MAX_SIZE, vector<int>(MAX_SIZE));
vector<vector<int>> matC(MAX_SIZE, vector<int>(MAX_SIZE));

// variable to track the row number calculated
int rowCounter = 0;

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

// thread routine to calculate the row of the product matrix using corresponding row of first matrix
// and corresponding column of second matrix
void* calculateRow(void* arg) {
    int rowNumber = rowCounter++;

    for (int i = 0; i < MAX_SIZE; i++)
        for (int j = 0; j < MAX_SIZE; j++)
            matC[rowNumber][i] += matA[rowNumber][j] * matB[j][i];

    return nullptr;
}



int main() {
    // initialize both matrices with random integer values
    initializeRandomMatrix(matA, MAX_SIZE);
    initializeRandomMatrix(matB, MAX_SIZE);

    // print both matrices
    cout << "Matrix A" << endl;
    printMatrix(matA);
    cout << "Matrix B" << endl;
    printMatrix(matB);

    // create one thread per row and start evaluating corresponding row of resultant matrix
    pthread_t threads[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; i++) {
        int* p;
        pthread_create(&threads[i], NULL, calculateRow, (void*)p);
    }

    // wait for all threads to complete
    for (int i = 0; i < MAX_SIZE; i++)
        pthread_join(threads[i], NULL);

    // print the resultant matrix
    cout << "Matrix C" << endl;
    printMatrix(matC);

    return 0;
}

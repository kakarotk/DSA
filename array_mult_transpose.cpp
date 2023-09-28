#include <iostream>

using namespace std;

const int MAX_SIZE = 100; // Maximum size for matrices

// Function to input a matrix
void inputMatrix(int mat[MAX_SIZE][MAX_SIZE], int &rows, int &cols) {
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    cout << "Enter matrix elements row-wise:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int mat[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

// Function to add two matrices
void addMatrices(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to transpose a matrix
void transposeMatrix(int mat[MAX_SIZE][MAX_SIZE], int trans[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            trans[j][i] = mat[i][j];
        }
    }
}

int main() {
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE], trans[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;

    cout << "Matrix 1:" << endl;
    inputMatrix(mat1, rows1, cols1);

    cout << "Matrix 2:" << endl;
    inputMatrix(mat2, rows2, cols2);

    if (rows1 != rows2 || cols1 != cols2) {
        cout << "Matrix addition and multiplication are not possible due to mismatched dimensions." << endl;
    } else {
        // Perform matrix addition
        addMatrices(mat1, mat2, result, rows1, cols1);
        cout << "Matrix Addition:" << endl;
        displayMatrix(result, rows1, cols1);

        // Perform matrix multiplication
        multiplyMatrices(mat1, mat2, result, rows1, cols1, cols2);
        cout << "Matrix Multiplication:" << endl;
        displayMatrix(result, rows1, cols2);
    }

    // Perform matrix transpose
    transposeMatrix(mat1, trans, rows1, cols1);
    cout << "Transpose of Matrix 1:" << endl;
    displayMatrix(trans, cols1, rows1);

    return 0;
}

#include <iostream>
using namespace std;

void printProduct(int** mat1, int** mat2, int r1, int c1, int r2, int c2)
{
    if (c1 != r2) {
        cout << "Impossible: The number of columns in the first matrix is " << c1 << " and the number of rows in the second matrix is " << r2 << endl;
    }
    else {
        int rslt[r1][c2];
        for (int i=0; i<r1; i++) {
            for (int j=0; j<c2; j++) {
                rslt[i][j] = 0;
                cout << "[ ";
                for (int k = 0; k < c1; k++) {
                    rslt[i][j] += mat1[i][k] * mat2[k][j];
                    cout << mat1[i][k] << " ";
                }
                cout << "] x [ ";
                for (int k = 0; k < r2; k++) {
                    cout << mat2[k][j] << " ";
                }
                cout << "] = " << rslt[i][j] << "\n";
            }
            cout << endl;
        }
    }
}

int main()
{
    int r1 = 3, c1 = 3;
    int r2 = 3, c2 = 2;
    int** mat1 = new int*[r1];
    for (int i=0; i<r1; i++) {
        mat1[i] = new int[c1];
    }
    mat1[0][0] = 1; mat1[0][1] = 2; mat1[0][2] = 4;
    mat1[1][0] = 8; mat1[1][1] = 16; mat1[1][2] = 32;
    mat1[2][0] = 64; mat1[2][1] = 128; mat1[2][2] = 256;
    int** mat2 = new int*[r2];
    for (int i=0; i<r2; i++) {
        mat2[i] = new int[c2];
    }
    mat2[0][0] = 3; mat2[0][1] = 5;
    mat2[1][0] = 7; mat2[1][1] = 9;
    mat2[2][0] = 11; mat2[2][1] = 13;
    printProduct(mat1, mat2, r1, c1, r2, c2);
    return 0;
}
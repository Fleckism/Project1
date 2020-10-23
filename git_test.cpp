/* 2.7.5 Matrix Addition pg 64
The sum of two matrices (two dimensional array?)  matrices A & B will be added and stored in C

*/

#include <iostream>

using namespace std;

int main()
{
    int row = 2, column = 3, sum[2][3], i, j; // i and j are initialized here instead of every loop
    int array_A[2][3] = { {0,1,2} , {3,4,5} };
    int array_B[2][3] = { {6,7,8} , {9,10,11} };

    cout << "A = " << endl;

    for (i = 0; i < row; ++i) {
        for (j = 0; j < column; ++j)
            cout << array_A[i][j] << "  "; // messed with [i][j]
        cout << endl;
    }
    cout << endl;

    cout << "B = " << endl;
    for (i = 0; i < row; ++i) {
        for (j = 0; j < column; ++j)
            cout << array_B[i][j] << "  ";
        cout << endl;
    }
    cout << endl;


    for (i = 0; i < row; ++i)
        for (j = 0; j < column; ++j)
            sum[i][j] = array_A[i][j] + array_B[i][j];

    cout << "A + B = " << endl;
    for (i = 0; i < row; ++i) {
        for (j = 0; j < column; ++j)
            cout << sum[i][j] << " ";
        cout << endl;
    }


    return 0;
}
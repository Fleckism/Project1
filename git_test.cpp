/* 275 Matrix addition

*/

#include <iostream>

using namespace std;

int main()
{
    int row = 2, column = 3, sum[2][3], i, j; // i and j are initialized here instead of every loop
    int a[2][3] = { {0,1,2} , {3,4,5} };
    int b[2][3] = { {6,7,8} , {9,10,11} };

    cout << "A = " << endl;

    for (i = 0; i < row; ++i) {
        for (j = 0; j < column; ++j)
            cout << a[i][j] << " A ";
        cout << endl;
    }
    cout << endl;

    cout << "B = " << endl;
    for (i = 0; i < row; ++i) {
        for (j = 0; j < column; ++j)
            cout << b[i][j] << " B ";
        cout << endl;
    }
    cout << endl;


    for (i = 0; i < row; ++i)
        for (j = 0; j < column; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    cout << "A + B = " << endl;
    for (i = 0; i < row; ++i) {
        for (j = 0; j < column; ++j)
            cout << sum[i][j] << " ";
        cout << endl;
    }


    return 0;
}
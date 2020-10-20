/* 2.7.4 Factorial
The factorial of a positive integer n

*/

#include <iostream>
using namespace std;

int main()
{
    int fact_in = 0;
    int factor_array[25];
    int product =0;
    cout << " Enter a positive integer to compute the factorial of :";
    cin >> fact_in;

    while (fact_in > 25 || fact_in <= 0) // Error Handling
    {
        cout << " Error! number should be in a  range of  1 to 25. " << endl;
        cout << " Enter number within said range." << endl;
        cin >> fact_in;
    }


    for (int i=0; fact_in > i; ++i )
        {
        cout << "Evaluate " << fact_in << "!." << endl;
        cout << i << "!" << " = " << i << '(' << --i << ')' << '=' << product << '.' <<  endl;

       // cin >> factor_array[i];
         //   product = factor_array[i] * factor_array[--i];
        }






    return 0;
}
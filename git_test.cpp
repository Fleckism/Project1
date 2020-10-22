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

    int one = 1;

    cout << " Enter a positive integer to compute the factorial of : ";
    cin >> fact_in;

    while (fact_in > 25 || fact_in <= 0) // Error Handling
    {
        cout << " Error! number should be in a  range of  1 to 25. " << endl;
        cout << " Enter number within said range." << endl;
        
    }


    for (int i = 1; i <= fact_in; ++i) // This for loop finds the factorial of fact_in
    {
        fact_in *= i;
    }

    for (int i=0; fact_in > i; ++i ) // i is incremented in the code block it was decremented
        {
        cout << "Evaluate " << fact_in << "!." << endl;
        
        cout << fact_in << "!" << " = " << fact_in << '(' << fact_in -1 << ')' << '=' << product << '.';

       // cin >> factor_array[i];
         //   product = factor_array[i] * factor_array[--i];
        }






    return 0;
}
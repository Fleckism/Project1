/* 2.7.4 Factorial
The factorial of a positive integer n

*/

#include <iostream>
using namespace std;

int main()
{
    int fact_in = 0;
    int factorial = 1;

    cout << "Input a number between 0 and 25: " << endl;
    cin >> fact_in;

    while (fact_in > 25 || fact_in <= 0) // Error Handling
    {
        cout << " Error! number should be in a  range of  1 to 25. " << endl;
        cout << " Enter number within said range." << endl;
        
    }

    for (int i = 1; i <= fact_in; ++i)
    {
        factorial *= i;
   }


    cout << fact_in << "! = " << factorial << endl;


    cout << endl << "***********************************************************************************************************************************" << endl;
    return 0;
}
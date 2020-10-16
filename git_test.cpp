/* Write an averaging program that prompts the user to enter a positive integer that specifies the number of values to average.
* Then output the array index with its value then display the average.

*/

#include <iostream>

using namespace std;

int sum_Array(int values[], int size)

{
	int sum = 0;

	// this array stops when i== size because the last element is size -1

	for (int i = 0; i < size; i++)
	{
		sum += values[i];
	}

	return sum;
}

int main()
{
	int values[10];

	for (int i = 0; i < 10; i++)

	{
		cout << "Enter value " << i << ':' << endl;

		cin >> values[i];
	}

	cout << sum_Array(values, 10) << endl;



}

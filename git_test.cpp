/* 2.7.3 Average pg 63
Write an averaging program that prompts the user to enter a positive integer that specifies the number of values to average.
* Then output the array index with its value then display the average.

*/

#include <iostream>

using namespace std;

int main()
{
	int array_size =0;
	float my_array[100], sum = 0.0, average;
	
	cout << "Enter desired size of the array." << endl;
	cin >> array_size;

	//while (array_size > 25 || array_size <= 25)  // ERROR HANDLING
	//{
	//	cout << "Error!  Number should be in range of (1 to 25)." << endl;
	//	cout << "Enter a number withing scope: " << endl;
	//	cin >> array_size;
	//}

	for ( int i =0 ; i < array_size; ++i)
	{
		cout << array_size + 1 << ". Enter number: ";
		cin >> my_array[i];
		sum += my_array[i];
	}

	average = sum / array_size;
	cout << "Average = " << average;
	
	


	




	return 0;
}
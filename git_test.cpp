/* 2.7.7 Linear Search pg 66

*/

#include <iostream>

using namespace std;

int main()
{
    int my_array[] = { 7,3,32,2,55,34,6,13,29,22,11,9,1,5,42,39,8 };
    int my_value = 0;
    int current_position = 0;

    cout << " List = ";

    for (int i = 0; i < 17; i++)
    {
        cout << my_array[i] << ',';
    }

    cout << endl << " Enter an interger in the list to search for : " << endl;
    cin >> my_value; // 55 should = 4
    

    for (int j = 0; j < 17; j++)
    {
        if (my_array[j] == my_value)
        {
            current_position = j;
            break;
        }
        

            
    }

    cout << " Item found at index [" << current_position << "]" << endl;
        


    return 0;
}
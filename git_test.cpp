/* 2.7.8 Selection Sort pg 66

*/

#include < iostream >
using namespace std;

void selectionSort(int arr[]) {
    for (int i = 0; i < 9; i++) {
        int min = i;

        for (int j = i + 1; j < 10; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

int main() {

    int my_Array[10];
    cout << "Enter 10 integers in random order: " << endl;
    //  Control loop for filling in 
    for (int i = 0; i < 10; i++)
    {
        cin >> my_Array[i];
    }

    cout << "UNSORTED ARRAY: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << my_Array[i] << "  ";
    }
    cout << endl;

    selectionSort(my_Array); // sorting actually happening

    cout << "SORTED ARRAY: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << my_Array[i] << "  ";
    }
    return 0;
}
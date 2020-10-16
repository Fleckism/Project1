#include <iostream>

using namespace std;

int main()
{
	int x = 0;  // East to West movement
	int y = 0;	// North to South movement
	//int current_position[2] = { 0,0 }; // Stores the current position
	char movement = 'Z';

	while (movement != 'Q')
	{
	cout << " Current Position = (" << x << ',' << y << ')' << endl;
	cout << " Move (N)orth, (E)ast, (W)est, (S)outh, (Q)uit? " << endl;
	cin >> movement;

	switch (movement)
	{
	case 'N':
		++y;//current_position[1]++;
		break;

	case 'S':
		--y;
		break;

	case 'E':
		--x;
		break;

	case 'W':
		++x;
		break;

	case 'Q':
		cout <<"Exiting..." << endl;
		break;
		
	default:
		cout << " Invalid entry " << endl;

		}








	}
	return 0;
}
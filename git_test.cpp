#include <iostream>

using namespace std;

int main()
{
	int x = 0;  // east to west movement
	int y = 0;	// north to south movement
	//int current_position[2] = { 0,0 }; // stores the current position
	char movement = 'z';

	while (movement != 'q')
	{
	cout << " current position = (" << x << ',' << y << ')' << endl;
	cout << " move (n)orth, (e)ast, (w)est, (s)outh, (q)uit? " << endl;
	cin >> movement;

	switch (movement)
	{
	case 'n':
		++y;//current_position[1]++;
		break;

	case 's':
		--y;
		break;

	case 'e':
		--x;
		break;

	case 'w':
		++x;
		break;

	case 'q':
		cout <<"exiting..." << endl;
		break;
		
	default:
		cout << " invalid entry " << endl;

		}








	}
	return 0;
}
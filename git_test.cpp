#include <iostream>

using namespace std;

int main()
{
	int x = 0; //East to West
	int y = 0; // North to South

	int current_position[2] = { x,y };
	char direction_travel = 'Z';

	while (direction_travel != 'Q')
	{
		cout << "Current Position = (" << current_position[x] << ',' << current_position[y] << ')' << endl;
		cout << "Move (N)orth, (E)ast, (W)est, (S)outh, (Q)uit?" << endl;

		cin >> direction_travel;

		switch (direction_travel)
		{
		case 'N':
			current_position[y] = ++y;
			break;

		case 'n':
			current_position[y] = ++y;
			break;

		case 'S':
			current_position[y] = --y;
			break;

		case 's':
			current_position[y] = --y;
			break;

		case 'E':
			current_position[x] = --y;
			break;

		case 'e':
			current_position[x] = --y;
			break;

		case 'W':
			current_position[x] = ++y;
			break;

		case 'w':
			current_position[x] = ++y;
			break;


		case 'Q':
			cout << "Exiting Program..." << endl;
			break;

		case 'q':
			cout << "Exiting Program..." << endl;
			break;

		default:
			cout << "Invalid entry." << endl;
		}
	}
}
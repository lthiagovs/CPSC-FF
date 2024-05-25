#include <iostream>
#include "Computer.H"

using namespace std;
using namespace Models;

int main() 
{

	bool run = true;
	int choice = 0;

	while (run)
	{
		cout << "0 - Sair" << endl;
		cin >> choice;

		switch (choice)
		{

			case 0:
				run = false;
				break;

			default:
				break;

		}

		system("CLS");

	}


	return 0;

}
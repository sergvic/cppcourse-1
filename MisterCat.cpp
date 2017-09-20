#include "MisterCat.h"

#include <iostream>;


void MisterCat::presentMenu()
{
	cout << "\t\tWelcome to MisterCat!" << endl << endl << "\t\t\tMenu" << endl;
	cout << "1 - pizza" << endl << endl << endl;
}

int MisterCat::takeOrder()
{
	cout << "Please, enter dish number and press enter to make an order." << endl;	
	int choosenDish = 0;
	cin >> choosenDish;

	return choosenDish;
}

MisterCat::MisterCat()
{
}

MisterCat::~MisterCat()
{
}

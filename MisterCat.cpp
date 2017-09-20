#include "MisterCat.h"

#include <iostream>;
#include <thread>

void MisterCat::presentMenu()
{
	cout << "\t\tWelcome to MisterCat!" << endl << endl << "\t\t\tMenu" << endl;
	cout << "1 - pizza" << endl << endl << endl;
}

void orderProcessingThread(int orderId)
{
	cout << "Start processing of order "<<orderId<<"..."<<endl;
	this_thread::sleep_for(3s);
	cout << "order " << orderId << "processed." << endl;
}

void MisterCat::processOrder(int orderId)
{
	orderThreads->push_back(thread(orderProcessingThread, orderId));
}

int MisterCat::takeOrder()
{
	cout << "Please, enter dish number and press enter to make an order."<<endl<<"If you are not ready, enter 0." << endl;	
	int choosenDish = 0;
	cin >> choosenDish;

	if (choosenDish > 0) {
		orders->push_back(choosenDish);
		processOrder(orders->size());
		return orders->size();
	}
	else
	{
		return 0;
	}

}

MisterCat::MisterCat()
{
	orders = new vector<int>();
	orderThreads = new vector<thread>();
}

MisterCat::~MisterCat()
{
	for (auto &t : *orderThreads) {
		if(t.joinable())
			t.join();
	}
}

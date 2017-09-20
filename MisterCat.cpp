#include "MisterCat.h"

#include "Pizza.h"

#include <iostream>;
#include <thread>

void MisterCat::presentMenu()
{
	cout << "\t\tWelcome to MisterCat!" << endl << endl << "\t\t\tMenu" << endl;
	cout << "1 - pizza" << endl << "2 - soup" << endl << endl;
}

void orderProcessingThread(Pizza *pizza)
{
	cout << "----------------------------------" << "Started cooking "<<pizza->name<<endl<< "----------------------------------"<<endl;
	this_thread::sleep_for(3s);
	cout <<"----------------------------------"<<endl << pizza->name << " cooked!" << endl<< "----------------------------------"<<endl;
}

void MisterCat::processOrder(int orderId)
{
	orderThreads->push_back(thread([this]() {orderProcessingThread((*this->orders)[0]);}));
}

int MisterCat::takeOrder()
{
	cout << "Please, enter dish number and press enter to make an order."<<endl<<"If you are not ready, enter 0." << endl;	
	int choosenDish = 0;
	cin >> choosenDish;

	if (choosenDish > 0) {
		orders->push_back(choosenDish == 1 ? new Pizza("quattro") : nullptr);
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
	orders = new vector<Pizza *>();
	orderThreads = new vector<thread>();
}

MisterCat::~MisterCat()
{
	for (auto &t : *orderThreads) {
		if(t.joinable())
			t.join();
	}
}
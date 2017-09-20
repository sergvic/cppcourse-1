#pragma once

//TODO: common includes?
#include <string>
#include <vector>
#include <thread>
using namespace std;

#include "Pizza.h"

class MisterCat
{
private:
	vector<thread> *orderThreads;

public:
	float income;

	vector<Pizza *> *orders;

	void presentMenu();
	int takeOrder();
	void processOrder(int orderId);

	MisterCat();
	~MisterCat();
};


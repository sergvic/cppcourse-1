#pragma once

//TODO: common includes?
#include <string>
#include <vector>
#include <thread>
using namespace std;

class MisterCat
{
private:
	vector<thread> *orderThreads;

public:
	float income;

	vector<int> *orders;

	void presentMenu();
	int takeOrder();
	void processOrder(int orderId);

	MisterCat();
	~MisterCat();
};


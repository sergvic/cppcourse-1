#pragma once

//TODO: common includes?
#include <string>
using namespace std;

class MisterCat
{
public:
	float income;

	void presentMenu();
	int takeOrder();

	MisterCat();
	~MisterCat();
};


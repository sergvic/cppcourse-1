#pragma once

#include <string>
using namespace std;

class Pizza
{
public:

	Pizza(string name);

	string name;
	float price;
	float primeCost;
	float weight;
	int cheeseType;

	Pizza();
};
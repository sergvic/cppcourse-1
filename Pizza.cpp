#include "Pizza.h"

Pizza::Pizza(string name)
{
	this->name = name;
}

Pizza::Pizza()
{
	name = "";
	price = 0;
	primeCost = 0;
	weight = 0;
	cheeseType = 0;
}
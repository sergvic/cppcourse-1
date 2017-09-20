#include <stdio.h>
#include <iostream>
#include "MisterCat.h"

void greetWorld()
{
	printf_s("Hello, world!\n");
}

void main() {
	auto cafe = new MisterCat();
	cafe->presentMenu();

	while (true)
	{
		auto orderId = cafe->takeOrder();
		if(orderId>0)
			cout << "Thank you - your order number: " << orderId << endl;
		else {
			break;
		}
	}

	cout << "Bye!" << endl;
}
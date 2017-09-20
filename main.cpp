#include <stdio.h>
#include "MisterCat.h"

void greetWorld()
{
	printf_s("Hello, world!\n");
}

void main() {
	auto cafe = new MisterCat();
	cafe->presentMenu();
	auto choosenDish = cafe->takeOrder();

}
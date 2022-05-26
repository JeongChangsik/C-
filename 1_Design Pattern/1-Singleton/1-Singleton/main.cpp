#define CRT_SECURE_NO_WARNINGS
#include <iostream>

#include "Singleton.h"


int main()
{
	Singleton &a = Singleton::instance();
	a.increaseInt();	// nInt : 0 -> 5
	a.printInt();

	Singleton &b = Singleton::instance();
	b.increaseInt();	// nInt : 5 -> 10
	a.printInt();
	b.printInt();

	a.increaseInt();	// nInt : 10 -> 15

	a.printInt();
	b.printInt();

	b.increaseInt();	// nInt : 15 -> 20

	a.printInt();
	b.printInt();

	return 0;
}


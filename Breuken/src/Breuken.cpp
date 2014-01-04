//============================================================================
// Name        : Breuken.cpp
// Author      : Barld Boot
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Breuk.Class.h"
using namespace std;

int main() {
	cout << "hij doet het" << endl; // prints !!!Hello World!!!

	Breuk b1 = Breuk(1,2);
	Breuk b2(1,2);

	Breuk antwoord = b1+b2;

	std::cout << antwoord.GetString();

	return 0;
}



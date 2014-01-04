/*
 * Breuk.Class.h
 *
 *  Created on: 1 jan. 2014
 *      Author: barld
 */

#ifndef BREUK_CLASS_H_
#define BREUK_CLASS_H_

#include <sstream>

#define SSTR( x ) dynamic_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()

#include <string>

class Breuk {
private://variable worden private vasgelegd
	int _teller;
	int _noemer;

public:
	int &Teller = _teller;
	int &Noemer = _noemer;

public:
	Breuk(int t, int n);
	virtual ~Breuk();
	void Vereenvoudig();
	void PrintString();
	std::string GetString();
	Breuk operator +(const Breuk b);//je kan nu twee objecten bij elkaar optellen
	Breuk operator *(const Breuk b);//je kan objecten met elkaar vermenigvuldigen
};

#endif /* BREUK_CLASS_H_ */

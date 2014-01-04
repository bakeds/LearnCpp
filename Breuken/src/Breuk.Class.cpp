/*
 * Breuk.Class.cpp
 *
 *  Created on: 1 jan. 2014
 *      Author: barld
 */

#include "Breuk.Class.h"
#include <iostream>

Breuk::Breuk(int t, int n)//: _teller(t), _noemer(n) // deze methode mag ook.
{
	this->_teller = t;
	this->_noemer = n;
	this->Vereenvoudig();
}

Breuk::~Breuk() {
	//  Auto-generated destructor stub
}

void Breuk::PrintString()
{
	std::cout << this->GetString();
}

std::string Breuk::GetString()
{
	std::string rtw = "";

	rtw += SSTR( this->_teller);
	rtw += "/";
	rtw += SSTR(this->_noemer);
	rtw += "\n";
	return rtw;//std::endl geeft in dit geval een error
}

Breuk Breuk::operator +(const Breuk b)
{
	int t , n;
	t = this->Teller * b.Noemer + b.Teller * this->Noemer;
	n = this->Noemer*b.Noemer;
	return Breuk(t,n);
}

Breuk Breuk::operator *(const Breuk b)
{
	int t , n;
	t = this->Teller *  b.Teller ;
	n = this->Noemer*b.Noemer;
	return Breuk(t,n);
}

void Breuk::Vereenvoudig()
{
	for(int i = this->Noemer;i>0;i--)
	{
		if(this->Teller%i==0 && this->Noemer%i==0)
		{
			this->Noemer/=i;
			this->Teller/=i;
		}
	}
}


#include "stdafx.h"
#include "LiczbaDwojkowaCalkowita.h"
#include <iostream>

using namespace std;

LiczbaDwojkowaCalkowita::LiczbaDwojkowaCalkowita()
{
	for (int i = 0; i < sizeof(tab) / sizeof(*tab); i++)
	{
		tab[i] = 0;
	}
}

LiczbaDwojkowaCalkowita::LiczbaDwojkowaCalkowita(int n)
{

	for (int i = 0; i < sizeof(tab) / sizeof(*tab); i++)
	{
		tab[i] = 0;
	}

	int i = BITS - 1;
	while (n > 0)
	{
		tab[i] = n % 2;
		i--;
		n = n / 2;
	}
}

void LiczbaDwojkowaCalkowita::intToBin(int decimal)
{
	
	int i = 7;
	while (decimal > 0)
	{		
		tab[i] = decimal % 2;
		i--;
		decimal = decimal / 2;
	}
}

int LiczbaDwojkowaCalkowita::binToInt()
{
	int dec = 0;
	int multi = 1;
	for (int i = BITS - 1; i >= 0; i--)
	{
		dec += tab[i] * multi;
		multi *= 2;
	}
	return dec;
}

string LiczbaDwojkowaCalkowita::binToString()
{
	string str = "";
	for (int i = 0; i < BITS; i++)
	{
		str += to_string(tab[i]);
	}
	return str;
}

int LiczbaDwojkowaCalkowita::get(int i)
{
	return tab[i];
}

void LiczbaDwojkowaCalkowita::copy(LiczbaDwojkowaCalkowita dwojkowa)
{
	for (int i = 0; i < BITS; i++)
	{
		tab[i] = dwojkowa.get(i);
	}
}


void LiczbaDwojkowaCalkowita::write()
{
	for (int i = 0; i < sizeof(tab) / sizeof(*tab); i++)
	{
		cout << tab[i];
	}
	cout << endl;
}
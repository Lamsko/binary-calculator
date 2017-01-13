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
	return 0;
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

void LiczbaDwojkowaCalkowita::write()
{
	for (int i = 0; i < sizeof(tab) / sizeof(*tab); i++)
	{
		cout << tab[i];
	}
	cout << endl;
}
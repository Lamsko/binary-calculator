#include "stdafx.h"
#include "LiczbaDwojkowaCalkowita.h"
#include <iostream>

LiczbaDwojkowaCalkowita::LiczbaDwojkowaCalkowita()
{
	for (int i = 0; i < sizeof(tablica) / sizeof(*tablica); i++)
	{
		tablica[i] = 0;
	}
}

LiczbaDwojkowaCalkowita::LiczbaDwojkowaCalkowita(int n)
{
}

void LiczbaDwojkowaCalkowita::intToBin(int decimal)
{
	LiczbaDwojkowaCalkowita binary;
	int i = 7;
	while (decimal > 0)
	{		
		tablica[i] = decimal % 2;
		i--;
		decimal = decimal / 2;
	}
	//return binary;
}
void LiczbaDwojkowaCalkowita::write()
{
	for (int i = 0; i < sizeof(tablica) / sizeof(*tablica); i++)
	{
		cout << tablica[i];
	}
	cout << endl;
}
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

LiczbaDwojkowaCalkowita LiczbaDwojkowaCalkowita::intToBin(int decimal)
{
	LiczbaDwojkowaCalkowita binary;
	while (decimal > 0)
	{
		int i = 0;
		tablica[i] = decimal % 2;
		i++;
		decimal = decimal / 2;
	}
	return binary;
}
void LiczbaDwojkowaCalkowita::write()
{
	for (int i = 0; i < sizeof(tablica) / sizeof(*tablica); i++)
	{
		cout << tablica[i];
	}
	cout << endl;
}
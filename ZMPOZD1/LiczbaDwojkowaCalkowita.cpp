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

	for (int i = 0; i < sizeof(tablica) / sizeof(*tablica); i++)
	{
		tablica[i] = 0;
	}

	int i = 7;
	while (n > 0)
	{
		tablica[i] = n % 2;
		i--;
		n = n / 2;
	}
}

void LiczbaDwojkowaCalkowita::intToBin(int decimal)
{
	
	int i = 7;
	while (decimal > 0)
	{		
		tablica[i] = decimal % 2;
		i--;
		decimal = decimal / 2;
	}
}

void LiczbaDwojkowaCalkowita::write()
{
	for (int i = 0; i < sizeof(tablica) / sizeof(*tablica); i++)
	{
		cout << tablica[i];
	}
	cout << endl;
}
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

LiczbaDwojkowaCalkowita LiczbaDwojkowaCalkowita::naDwojkowa(int dziesietna)
{
	LiczbaDwojkowaCalkowita dwojkowa;
	while (dziesietna > 0)
	{
		int i = 0;
		tablica[i] = dziesietna % 2;
		i++;
		dziesietna = dziesietna / 2;
	}
	return dwojkowa;
}
void LiczbaDwojkowaCalkowita::wypiszDwojkowa()
{
	for (int i = 0; i < sizeof(tablica) / sizeof(*tablica); i++)
	{
		cout << tablica[i];
	}
}
//int LiczbaDwojkowaCalkowita::naDziesietna(LiczbaDwojkowaCalkowita dwojkowa)
//{
//
//}
//string LiczbaDwojkowaCalkowita::zamienNaNapis(LiczbaDwojkowaCalkowita dwojkowa) 
//{
//
//}
//LiczbaDwojkowaCalkowita LiczbaDwojkowaCalkowita::przypisz(LiczbaDwojkowaCalkowita dwojkowa)
//{
//
//}
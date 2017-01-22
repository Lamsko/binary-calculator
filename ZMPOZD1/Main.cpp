// ZMPOZD1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

#include "LiczbaDwojkowaCalkowita.h"


using namespace std;


int main()
{	
	cout << "Podaj calkowita liczbe dziesietna: " << endl;
	long int n;
	cin >> n;
	LiczbaDwojkowaCalkowita liczbaDwojkowa;
	liczbaDwojkowa.intToBin(n);
	liczbaDwojkowa.write();
	cout << "97 w postaci binarnej:" << endl;
	LiczbaDwojkowaCalkowita liczbaDwojkowa2(97);
	liczbaDwojkowa2.write();
	cout << "LiczbaDwojkowa zamiana na string:" << endl;
	cout << liczbaDwojkowa.toString() << endl;
	cout << liczbaDwojkowa2.toString() << endl;
	cout << "LiczbaDwojakowa zamiana na int:" << endl;
	cout << liczbaDwojkowa.binToInt() << endl;
	cout << liczbaDwojkowa2.binToInt() << endl;
	cout << "Kopiowienie: " << endl;
	cout << "Przed kopiowaniem:" << endl;
	liczbaDwojkowa2.write();
	cout << "Kopiujemy z:" << endl;
	cout << liczbaDwojkowa.toString() << endl;
	cout << "Po skopiowaniu:" << endl;
	liczbaDwojkowa2.copy(liczbaDwojkowa);
	cout << liczbaDwojkowa2.toString() << endl;
	cout << "\n";
	//cout << "Liczba dwojkowa 57:" << endl;
	LiczbaDwojkowaCalkowita liczbaDwojkowa3(157);
	//liczbaDwojkowa3.write();
	cout << "Dodajemy dwie liczby: " << endl;
	cout << liczbaDwojkowa.toString() << endl;
	cout << "+" << endl;
	cout << liczbaDwojkowa3.toString() << endl;
	cout << "=" << endl;;
	cout << liczbaDwojkowa.add(liczbaDwojkowa3).toString() << endl;
	cout << "\n" << endl;
	//cout << liczbaDwojkowa3.toString() << endl;
	//cout << liczbaDwojkowa2.toString() << endl;
	cout << "Odejmujemy dwie liczby:" << endl;
	cout << liczbaDwojkowa.toString() << endl;
	cout << "-" << endl;
	cout << liczbaDwojkowa3.toString() << endl;
	cout << "=" << endl;
	cout << liczbaDwojkowa.sub(liczbaDwojkowa3).toString() << endl;

	cout << "\n" << endl;
	cout << "Liczba przed przesunieciem: " << endl;
	liczbaDwojkowa2.write();
	cout << "Przesuniecie w prawo:" << endl;
	liczbaDwojkowa2.shiftRigt();
	liczbaDwojkowa2.write();
	cout << "Przesuniecie w lewo:" << endl;
	liczbaDwojkowa2.shifLeft();
	liczbaDwojkowa2.shifLeft();
	liczbaDwojkowa2.write();
    
	return 0;
}


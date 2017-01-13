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
	int n;
	cin >> n;
	LiczbaDwojkowaCalkowita liczbaDwojkowa;
	liczbaDwojkowa.intToBin(n);
	liczbaDwojkowa.write();
	LiczbaDwojkowaCalkowita liczbaDwojkowa2(97);
	liczbaDwojkowa2.write();
	cout << liczbaDwojkowa.binToString() << endl;
	cout << liczbaDwojkowa2.binToString() << endl;
	cout << liczbaDwojkowa.binToInt() << endl;
	cout << liczbaDwojkowa2.binToInt() << endl;
	
	liczbaDwojkowa2.copy(liczbaDwojkowa);
	cout << liczbaDwojkowa.binToString() << endl;
	cout << liczbaDwojkowa2.binToString() << endl;
    
	return 0;
}


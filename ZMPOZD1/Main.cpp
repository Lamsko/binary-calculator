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
    
	return 0;
}


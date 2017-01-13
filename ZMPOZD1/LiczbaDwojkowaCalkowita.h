#pragma once
#include <string>

using namespace std;

const int BITS{ 8 };

class LiczbaDwojkowaCalkowita
{
public:
	LiczbaDwojkowaCalkowita();
	LiczbaDwojkowaCalkowita(int n);
	void intToBin(int dziesietna);
	int binToInt();
	string binToString();
	int get(int i);
	void copy(LiczbaDwojkowaCalkowita dwojkowa);
	void write();
private:
	int tab[BITS];
};

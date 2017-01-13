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
	void write();
private:
	int tablica[BITS];
};

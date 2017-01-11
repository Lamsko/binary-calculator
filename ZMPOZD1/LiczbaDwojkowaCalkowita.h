#pragma once
#include <string>

using namespace std;


class LiczbaDwojkowaCalkowita
{
public:
	LiczbaDwojkowaCalkowita();
	LiczbaDwojkowaCalkowita(int n);
	void intToBin(int dziesietna);
	void write();
private:
	int tablica[8];
};

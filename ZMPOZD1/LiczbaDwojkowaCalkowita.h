#pragma once
#include <string>

using namespace std;


class LiczbaDwojkowaCalkowita
{
public:
	LiczbaDwojkowaCalkowita();
	LiczbaDwojkowaCalkowita intToBin(int dziesietna);
	void write();
private:
	int tablica[10];
};

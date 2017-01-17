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
	string toString();
	//int get(int i);
	void copy(LiczbaDwojkowaCalkowita dwojkowa);
	void write();

	LiczbaDwojkowaCalkowita add(LiczbaDwojkowaCalkowita bin);
	LiczbaDwojkowaCalkowita sub(LiczbaDwojkowaCalkowita bin);
private:
	int tab[BITS];
};

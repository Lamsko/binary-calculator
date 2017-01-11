#pragma once
#include <string>

using namespace std;


class LiczbaDwojkowaCalkowita
{
public:
	LiczbaDwojkowaCalkowita();
	LiczbaDwojkowaCalkowita naDwojkowa(int dziesietna);
	//int naDziesietna(LiczbaDwojkowaCalkowita dwojkowa);
	//string zamienNaNapis(LiczbaDwojkowaCalkowita dwojkowa);
	//LiczbaDwojkowaCalkowita przypisz(LiczbaDwojkowaCalkowita dwojkowa);
	void wypiszDwojkowa();
private:
	int tablica[10];
};

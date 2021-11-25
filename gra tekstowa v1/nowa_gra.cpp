#include "nowa_gra.h"
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include "u¿ytkownik.h"
using namespace std;

void nowa_gra::nowa()
{
	string name;
	int wiek;
	cout << "Witam w nowej grze" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "Aby rozpoczac, musisz podac troche informacji o twojej postaci." << endl;
	cout << "Podaj imie: ";
	cin >> name;
	cout << endl;
	cout << "Podaj wiek swojej postaci: ";
	cin >> wiek;
	cout << endl;
	cout << "Dobrze, znamy twoje imie i wiek" << endl;
	cout << "Imie " << name  << endl;
	cout << "Wiek " << wiek  << endl;


	fstream Zapis;
	Zapis.open("zapis.txt", ios::in | ios::out | ios::app);

	if (Zapis.good() == true)
	{
		
		//tu operacje na pliku
	}
	else {
		cout << "Dostep do pliku zostal zabroniony!" << std::endl;
	}
	Zapis << name << endl;
	Zapis << wiek << endl;

	//string linia;
	
	//int nr_linii = 1;
	//while (getline(Zapis, linia))
	//{
	//	switch (nr_linii)
	//	{
	//	default:
	//	case 1: name = linia; break;
	//	case 2: wiek = atoi(linia.c_str()); break;
	//	}
	//	nr_linii++;
		

	//}
	//cout << name << endl;	
	//cout << wiek << endl;
	

}

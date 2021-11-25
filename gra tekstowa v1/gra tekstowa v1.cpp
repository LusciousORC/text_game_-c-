#include <iostream>
#include <windows.h>
#include "ładowanie.h"
#include "menu.h"
#include <conio.h>
#include "wybór.h"
#include <string>

using namespace std;

int main()
{
	
	menu gra;
	gra.pow();
	string tekst = "Nacisnij enter by przejsc dalej... ";
	for (int i = 0; i < tekst.length(); i++)
	{
		cout << tekst[i];
		Sleep(50);
	}
	cin.get();
	system("cls");
	lad ladowanie;
	ladowanie.ladowanie();

	wybór wybor;

	wybor.wybor();
	
}
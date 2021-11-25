#include "menu.h"
#include <iostream>
#include <string>
#include <Windows.h>


void menu::pow()
{
	string powitanie = "Witam w grze tekstowej";
	for (int i = 0; i < powitanie.length(); i++)
	{
		cout << powitanie[i];
		Sleep(50);
	}
	cout << endl;
}


void menu::wyb()
{
	system("cls");
	cout << "dziala" << endl;
}


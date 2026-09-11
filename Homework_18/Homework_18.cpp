#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<Windows.h>
#include<iomanip>
#include<fstream>

#include"Struct.h"

using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	SetColor(Black, White);
	system("cls");
	srand(time(0));

	Library books;
	books.menu();


	return 0;
}
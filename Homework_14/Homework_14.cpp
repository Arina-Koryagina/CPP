#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<Windows.h>
#include<iomanip>

#include"Func.h"

using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	SetColor(White, Black);
	system("cls");
	srand(time(0));


	//  I
	cout << "\tI" << endl;
	// функція порівнює два рядки і, якщо рядки рівні, повертає 0,
	// якщо перший рядок більший за другий, то повертає 1, в іншому разі -1.
	char st1[80], st2[80];
	cout << "1st line: "; cin.getline(st1, 80);
	cout << "2nd line: "; cin.getline(st2, 80);
	cout << mystrcmp(st1, st2) << endl;
	//cout << strcmp(st1, st2) << endl;


	//  II
	cout << "\n\tII" << endl;
	// функція конвертує рядок у число і повертає це число.
	char st[80];
	cout << "Line: "; cin.getline(st, 80);
	cout << StringToNumber(st) << endl;
	//cout << atoi(st) << endl;


	//  III
	cout << "\n\tIII" << endl;
	// функція конвертує число в рядок і повертає покажчик на цей рядок.
	int num;
	cout << "Number: "; cin >> num;
	cout << NumberToString(num) << endl;
	//cout << _itoa(num, st, 10) << endl;


	//  IV
	cout << "\n\tIV" << endl;
	// функція перетворює рядок у верхній регістр.
	cout << "Line: "; cin.ignore(); cin.getline(st, 80);
	cout << Uppercase(st) << endl;
	//cout << _strupr(st) << endl;


	//  V
	cout << "\n\tV" << endl;
	// функція перетворює рядок у нижній регістр.
	cout << "Line: "; cin.getline(st, 80);
	cout << Lowercase(st) << endl;
	//cout << _strlwr(st) << endl;


	//  VI
	cout << "\n\tVI" << endl;
	// функція реверсує рядок і повертає покажчик на новий рядок.
	cout << "Line: "; cin.getline(st, 80);
	cout << mystrrev(st) << endl;


	return 0;
}
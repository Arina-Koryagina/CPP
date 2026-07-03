#pragma once
#include<iostream>
#include<Windows.h>
#include<iomanip>
#include<conio.h>

#include"myFunc.h"

struct Point
{
	char name;
	int x;
	int y;

	void print()
	{
		cout << name << " (" << x << "; " << y << ")" << endl;
	}
};

struct Date
{
	int day;
	int month;
	int year;

	void print()
	{
		if (day < 10)
		{
			cout << "0";
		}
		cout << day << "/";
		if (month < 10)
		{
			cout << "0";
		}
		cout << month << "/";
		cout << year << endl;
	}
};

double getLen(Point p1, Point p2)
{
	int x = p2.x - p1.x;
	int y = p2.y - p1.y;
	return sqrt(pow(x, 2) + pow(y, 2));
}

struct Human
{
	char* name;
	Date bd;
};

struct Engine
{
	int cylinders = 4;
	bool running = false;

	void start()
	{
		SetColor(Green, Black);
		running = true;
		cout << "Engine started!" << endl;
		SetColor(White, Black);
	}
	void stop()
	{
		SetColor(LightRed, Black);
		running = false;
		cout << "Engine stopped!" << endl;
		SetColor(White, Black);
	}
};

struct Auto
{

	Engine engine;

	void beep()
	{
		SetColor(LightBlue, Black);
		cout << "Beep-beep!" << endl;
		SetColor(White, Black);
	}
	void move()
	{
		cout << "Key detected." << endl;
		cout << "Starting the engine..." << endl;
		engine.start();
		cout << "Car started!" << endl;
		cout << "Driving..." << endl;
		beep();
		cout << "Car stopped!" << endl;
		cout << "Stopping the engine..." << endl;
		engine.stop();
	}
};

struct Abonent
{
	char* name;
	char* number;

	void input()
	{
		char buffer[80];
		cout << "Enter name    : "; cin.getline(buffer, 80);
		name = new char[strlen(buffer) + 1];
		strcpy(name, buffer);

		cout << "Enter number  : "; cin.getline(buffer, 80);
		number = new char[strlen(buffer) + 1];
		strcpy(number, buffer);
	}

	void print()
	{
		cout << setw(15) << left << name << setw(15) << left << number << endl;
	}
};

struct Phonebook
{
	Abonent* abonents = nullptr;
	int size = 0;

	void menu()
	{
		innit();
		while (true)
		{
			system("cls");
			cout << "            PHONEBOOK      " << endl;
			cout << "----------------------------------" << endl;
			cout << "1. Print all contacts\n2. Add contact\n3. Edit contact\n4. Remove contact\n5. Search contact\n6. Exit" << endl;
			int choice;
			cin >> choice; cin.ignore();
			switch (choice)
			{
			case 1:
				printAll();
				break;
			case 2:
				addContact();
				break;
			case 3:
				editContact();
				break;
			case 4:
				removeContact();
				break;
			case 5:
				findContact();
				break;
			case 6:
				exit(0);
			default:
				break;
			}
		}
	}

	void innit()
	{
		size = 3;
		abonents = new Abonent[3];
		abonents[0].name = new char[] {"Brian"};
		abonents[0].number = new char[] {"+442010315082"};// { "+44 (20) 1031-5082" };
		abonents[1].name = new char[] {"Gerard"};
		abonents[1].number = new char[] {"+19730326783"};
		abonents[2].name = new char[] {"Billie"};
		abonents[2].number = new char[] {"+13110327009"};
	}

	void printAll()
	{
		system("cls");
		cout << "             PHONEBOOK            " << endl;
		cout << "----------------------------------" << endl;
		cout << "      Name           Number" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << setw(4) << right << i + 1 << ". ";
			abonents[i].print();
		}
		system("pause");
	}

	void addContact()
	{
		system("cls");
		cout << "            Add Contact           " << endl;
		cout << "----------------------------------" << endl;
		
		Abonent ab;
		ab.input();
		addValueArray(abonents, size, ab);
		cout << "Contact added." << endl;
		system("pause");


		//char buffer[1024];
		//Abonent* temp = new Abonent[size + 1];
		//copyList(list, temp, size);
		//
		//cout << "New name: "; cin.getline(buffer, 1024);
		//int len = strlen(buffer);
		//char* str = new char[len + 1];
		//strcpy(str, buffer);
		//abonents[size].name = str;
		//
		//do
		//{
		//	cout << "New number: +"; cin.getline(buffer, 1024);
		//	len = strlen(buffer);
		//	if (len > 15 || len < 7)
		//	{
		//		cout << "Make sure you wrote the right number, and no other symbols were used." << endl;
		//	}
		//} while (len > 15);
		//char* num = new char[len + 1];
		//strcpy(num, buffer);
		//abonents[size].number = num;
	}

	void editContact()
	{

	}

	void removeContact()
	{

	}

	void findContact()
	{

	}
};
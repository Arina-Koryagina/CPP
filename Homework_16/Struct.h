#pragma once
#include<iostream>
#include<Windows.h>
#include<iomanip>

#include"Func.h"

using namespace std;


struct Book
{
	char* title;
	char* author;
	char* publisher;
	char* genre;

	void input()
	{
		char buffer[80];
		cout << "Enter title     : "; cin.getline(buffer, 80);
		title = new char[strlen(buffer) + 1];
		strcpy(title, buffer);

		cout << "Enter author    : "; cin.getline(buffer, 80);
		author = new char[strlen(buffer) + 1];
		strcpy(author, buffer);

		cout << "Enter publisher : "; cin.getline(buffer, 80);
		publisher = new char[strlen(buffer) + 1];
		strcpy(publisher, buffer);

		cout << "Enter genre     : "; cin.getline(buffer, 80);
		genre = new char[strlen(buffer) + 1];
		strcpy(genre, buffer);
	}

	void print()
	{
		cout << setw(25) << left << title << setw(25) << left << author << setw(25) << left << publisher << setw(15) << left << genre << endl;
	}
};

struct Library
{
	Book* books = nullptr;
	int size = 0;

	void menu()
	{
		innit();
		while (true)
		{
			system("cls");
			cout << "                                               LIBRARY" << endl;
			printLine();
			cout << "1. Print all books\n2. Add a book\n3. Edit a book\n4. Search by ...\n5. Sort by ...\n6. Exit" << endl;
			int choice;
			cin >> choice; cin.ignore();
			switch (choice)
			{
			case 1:
				printAll();
				break;
			case 2:
				addBook();
				break;
			case 3:
				editBook();
				break;
			case 4:
				findBook();
				break;
			case 5:
				sortBooks();
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
		size = 10;
		books = new Book[10];
		books[0].title = new char[] { "Good Omens" };
		books[0].author = new char[] { "Terry Pratchett" };
		books[0].publisher = new char[] { "Corgi" };
		books[0].genre = new char[] { "Fantasy" };

		books[1].title = new char[] { "Loveless" };
		books[1].author = new char[] { "Alice Oseman" };
		books[1].publisher = new char[] { "HarperCollins" };
		books[1].genre = new char[] { "Young Adult" };

		books[2].title = new char[] { "Hamlet" };
		books[2].author = new char[] { "William Shakespeare" };
		books[2].publisher = new char[] { "Simon & Schuster" };
		books[2].genre = new char[] { "Tragedy" };

		books[3].title = new char[] { "Animal Farm" };
		books[3].author = new char[] { "George Orwell" };
		books[3].publisher = new char[] { "Secker & Warburg" };
		books[3].genre = new char[] { "Political Satire" };

		books[4].title = new char[] { "Radio Silence" };
		books[4].author = new char[] { "Alice Oseman" };
		books[4].publisher = new char[] { "HarperCollins" };
		books[4].genre = new char[] { "Young Adult" };

		books[5].title = new char[] { "The Colour of Magic" };
		books[5].author = new char[] { "Terry Pratchett" };
		books[5].publisher = new char[] { "Colin Smythe" };
		books[5].genre = new char[] { "Fantasy" };

		books[6].title = new char[] { "Much Ado About Nothing" };
		books[6].author = new char[] { "William Shakespeare" };
		books[6].publisher = new char[] { "Simon & Schuster" };
		books[6].genre = new char[] { "Comedy" };

		books[7].title = new char[] { "1984" };
		books[7].author = new char[] { "George Orwell" };
		books[7].publisher = new char[] { "Secker & Warburg" };
		books[7].genre = new char[] { "Dystopian" };

		books[8].title = new char[] { "Solitaire" };
		books[8].author = new char[] { "Alice Oseman" };
		books[8].publisher = new char[] { "HarperCollins" };
		books[8].genre = new char[] { "Young Adult" };

		books[9].title = new char[] { "Mort" };
		books[9].author = new char[] { "Terry Pratchett" };
		books[9].publisher = new char[] { "Victor Gollancz" };
		books[9].genre = new char[] { "Fantasy" };
	}

	void printAll()
	{
		system("cls");
		cout << "                                               LIBRARY" << endl;
		printLine();
		cout << "      " << setw(25) << left << "Title" << setw(25) << left << "Author" << setw(25) << left << "Publisher" << setw(15) << left << "Genre" << endl;
		SetColor(DarkGray, White);
		for (int i = 0; i < size; i++)
		{
			cout << setw(4) << right << i + 1 << ". ";
			books[i].print();
		}
		SetColor(Black, White);
		system("pause");
	}

	void addBook()
	{
		system("cls");
		cout << "                                               Add a book" << endl;
		printLine();

		Book ab;
		ab.input();
		addValueArray(books, size, ab);
		SetColor(Green, White);
		cout << "Book added." << endl;
		SetColor(Black, White);
		system("pause");
	}

	void editBook()
	{
		printAll();
		cout << "Which book you want to edit? (number): ";
		int book, ind;
		cin >> book; cin.ignore(); book -= 1;
		cout << setw(25) << left << "1. Title" << setw(25) << left << "2. Author" << setw(25) << left << "3. Publisher" << setw(15) << left << "4. Genre" << endl;
		cout << "   "; books[book].print();
		do
		{
			cout << "Which parametr do you want to edit? (5 - save): ";
			cin >> ind; cin.ignore();
			char buffer[80];
			switch (ind)
			{
			case 1:
				cout << "Enter new title     : "; cin.getline(buffer, 80);
				delete[] books[book].title;
				books[book].title = new char[strlen(buffer) + 1];
				strcpy(books[book].title, buffer);
				break;
			case 2:
				cout << "Enter new author    : "; cin.getline(buffer, 80);
				delete[] books[book].author;
				books[book].author = new char[strlen(buffer) + 1];
				strcpy(books[book].author, buffer);
				break;
			case 3:
				cout << "Enter new publisher : "; cin.getline(buffer, 80);
				delete[] books[book].publisher;
				books[book].publisher = new char[strlen(buffer) + 1];
				strcpy(books[book].publisher, buffer);
				break;
			case 4:
				cout << "Enter new genre     : "; cin.getline(buffer, 80);
				delete[] books[book].genre;
				books[book].genre = new char[strlen(buffer) + 1];
				strcpy(books[book].genre, buffer);
				break;
			default:
				break;
			}
			if (ind != 5)
			{
				cout << setw(25) << left << "1. Title" << setw(25) << left << "2. Author" << setw(25) << left << "3. Publisher" << setw(15) << left << "4. Genre" << endl;
				cout << "   "; books[book].print();
			}
		} while (ind != 5);
		system("pause");
	}

	void findBook()
	{

	}

	void sortBooks()
	{

	}
};
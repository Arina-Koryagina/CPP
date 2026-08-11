#pragma once
#include<iostream>
#include<Windows.h>
#include<iomanip>

#include"Func.h"

using namespace std;

const int LIBRARY_SIZE = 10;

struct Book
{
	char* title = nullptr;
	char* author = nullptr;
	char* publisher = nullptr;
	char* genre = nullptr;

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
		init();
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

	void init()
	{
		books = new Book[LIBRARY_SIZE];
		size = LIBRARY_SIZE;
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
		system("cls");
		cout << "                                              Find a book" << endl;
		printLine();
		int choice, found = 0;
		cout << "1. author\n2. title\nSearch a book by... " << endl;
		cin >> choice; cin.ignore();
		char buffer[80];

		system("cls");
		cout << "                                              Find a book" << endl;
		printLine();
		int* bookInds = new int[size];
		
		switch (choice)
		{
		case 1:
			cout << "Enter the author    : "; cin.getline(buffer, 80);
			for (int start = 0; start < size;)
			{
				int book = findValue(books + start, size - start, buffer, compareAuthor);

				if (book == -1)
				{
					break;
				}

				book += start;
				bookInds[found++] = book;
				start = book + 1;
			}
			break;
		case 2:
			cout << "Enter the title     : "; cin.getline(buffer, 80);
			for (int start = 0; start < size;)
			{
				int book = findValue(books + start, size - start, buffer, compareTitle);

				if (book == -1)
				{
					break;
				}

				book += start;
				bookInds[found++] = book;
				start = book + 1;
			}
			break;
		default:
			break;
		}
		if (found != 0)
		{
			cout << "      " << setw(25) << left << "Title" << setw(25) << left << "Author" << setw(25) << left << "Publisher" << setw(15) << left << "Genre" << endl;
			for (int i = 0; i < found; i++)
			{
				cout << setw(4) << right << bookInds[i] + 1 << ". "; books[bookInds[i]].print();
			}
		}
		else
		{
			cout << "Book(s) not found!" << endl;
		}

		delete[] bookInds;

		system("pause");
	}

	void sortBooks()
	{
		system("cls");
		cout << "                                                Sort books" << endl;
		printLine();

		int choice, order;
		cout << "1. Title\n2. Author\n3. Publisher\nSort by... ";
		cin >> choice; cin.ignore();
		cout << "\n1. Ascending\n2. Descending\nOrder... ";
		cin >> order; cin.ignore();
		char** list = new char* [size];
		int* indexes = new int[size];

		for (int i = 0; i < size; i++)
		{
			indexes[i] = i;
		}

		switch (choice)
		{
		case 1:
			for (int i = 0; i < size; i++)
			{
				list[i] = books[i].title;
			}
			break;
		case 2:
			for (int i = 0; i < size; i++)
			{
				list[i] = books[i].author;
			}
			break;
		case 3:
			for (int i = 0; i < size; i++)
			{
				list[i] = books[i].publisher;
			}
			break;
		default:
			break;
		}

		(order == 1) ? bubbleSort(list, indexes, size) : bubbleSort(list, indexes, size, desc);

		Book* temp = new Book[size];

		for (int i = 0; i < size; i++)
		{
			temp[i] = books[indexes[i]];
		}
		for (int i = 0; i < size; i++)
		{
			books[i] = temp[i];
		}

		delete[] temp;
		delete[] indexes;
		delete[] list;

		SetColor(Green, White);
		cout << "Sorted!" << endl;
		SetColor(Black, White);

		system("pause");
	}
};
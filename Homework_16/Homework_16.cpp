#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<Windows.h>
#include<iomanip>

#include"Struct.h"

using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	SetColor(Black, White);
	system("cls");
	srand(time(0));

	// Розробіть програму "Бібліотека". Створіть структуру "Книга" (назва, автор, видавництво, жанр).
	// Створіть масив із 10 книг. Реалізуйте для нього такі можливості:
	// - Редагувати книгу;
	// - Друк усіх книг;
	// - Пошук книги за автором;
	// - Пошук книги за назвою;
	// - Сортування масиву за назвою книг;
	// - Сортування масиву за автором;
	// - Сортування масиву за видавництвом.

	Library books;
	books.menu();


	return 0;
}
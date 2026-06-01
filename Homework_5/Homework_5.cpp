#include<iostream>
#include<Windows.h>
#include<iomanip>

using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	srand(time(0));

	/*----------------------*/
	/*const int size = 11;
	int a[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	for (size_t i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	int c[size * 2 + 1];
	int ind = 0, x = 0;
	for (size_t i = 0; i <= (size / 2); i++)
	{
		for (size_t j = 0; j <= 3; j++)
		{
			c[ind + j] = a[i + x];
		}
		c[ind + 3] = a[i + x + 1];
		ind += 4;
		x++;
	}
	for (size_t i = 0; i < ind - 4 + 3*(size%2); i++) {
		cout << c[i] << " ";
	}
	cout << endl;*/
	/*----------------------*/


	//  I
	cout << "\n\tI" << endl;
	// Написати програму "довідник". Створити два одновимірні масиви. Один масив зберігає номери
	// мобільних телефонів, другий — домашні телефонні номери. Реалізувати меню для користувача:
	// - Відсортувати за номерами мобільних;
	// - Відсортувати за домашніми номерами телефонів;
	// - Вивести список користувачів;
	// - Вихід.

	/*const int size = 10;
	int phone[size];
	int home[size];
	int action;

	int min = 503600000, max = 999999999;
	for (size_t i = 0; i < size; i++) {
		phone[i] = rand() % (max - min + 1) + min;
		home[i] = rand() % (max - min + 1) + min;
	}

	bool run = true;
	do {
		cout << "1 - sort by the phone number" << endl;
		cout << "2 - sort by the home number" << endl;
		cout << "3 - display a list of users" << endl;
		cout << "4 - exit" << endl;
		cout << "What do you want to do? ";
		cin >> action;

		switch (action)
		{
		case 1:
			for (size_t j = 0; j < size - 1; j++)
			{
				for (size_t i = 0; i < size - 1 - j; i++)
				{
					if (phone[i] > phone[i+1])
					{
						int a = phone[i];
						phone[i] = phone[i + 1];
						phone[i + 1] = a;
						a = home[i];
						home[i] = home[i + 1];
						home[i + 1] = a;
					}
				}
			}
			cout << "Here you go!" << endl;
			cout << setw(4) << "n. " << "  phone number" << " -  home  number\n" << endl;
			for (size_t i = 0; i < size; i++) {
				cout << setw(2) << i + 1 << ".  +380" << phone[i] << " - +380" << home[i] << endl;
			}
			cout << endl;
			break;
		case 2:
			for (size_t j = 0; j < size - 1; j++)
			{
				for (size_t i = 0; i < size - 1 - j; i++)
				{
					if (home[i] > home[i + 1])
					{
						int a = phone[i];
						phone[i] = phone[i + 1];
						phone[i + 1] = a;
						a = home[i];
						home[i] = home[i + 1];
						home[i + 1] = a;
					}
				}
			}
			cout << "Here you go!" << endl;
			cout << setw(4) << "n. " << "  phone number" << " -  home  number\n" << endl;
			for (size_t i = 0; i < size; i++) {
				cout << setw(2) << i + 1 << ".  +380" << phone[i] << " - +380" << home[i] << endl;
			}
			cout << endl;
			break;
		case 3:
			cout << setw(4) << "n. " << "  phone number" << " -  home  number\n" << endl;
			for (size_t i = 0; i < size; i++) {
				cout << setw(2) << i + 1 << ".  +380" << phone[i] << " - +380" << home[i] << endl;
			}
			cout << endl;
			break;
		case 4:
			cout << "Bye!" << endl;
			run = false;
			break;
		default:
			cout << "Please, use 1-4 only!" << endl;
			break;
		}
	} while (run);*/


	//  II
	cout << "\n\tII" << endl;
	// Написати програму, що реалізує сортування масиву методом удосконаленого сортування бульбашковим методом.
	// Удосконалення полягає в тому, щоб аналізувати кількість перестановок на кожному кроці, якщо ця
	// кількість дорівнює нулю, то продовжувати сортування немає сенсу — масив відсортовано. 




	//  III
	cout << "\n\tIII" << endl;
	// Є стопка оладок різного радіуса. Єдина операція, що проводиться з ними —
	// між будь-якими двома вставляємо лопатку і змінюємо порядок оладок над лопаткою на зворотний.
	// Необхідно за мінімальну кількість таких операцій відсортувати знизу вгору за зменшенням радіуса.

	const int size = 7;
	int d[size];
	int min = 3, max = 23;
	for (size_t i = 0; i < size; i++) {
		d[i] = rand() % (max - min + 1) + min;
	}
	for (size_t i = 0; i < size; i++) {
		cout << d[i] << " ";
	}
	cout << endl;

	for (size_t i = 0; i < size/2; i++)
	{
		int a = d[size - 1 - i];
		d[size - 1 - i] = d[i];
		d[i] = a;
	}
	for (size_t i = 0; i < size; i++) {
		cout << d[i] << " ";
	}
	cout << endl;


	return 0;
}
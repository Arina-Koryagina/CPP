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
	// Написати функцію, що додає стовпчик двовимірному масиву в зазначену позицію.




	//  II
	cout << "\n\tII" << endl;
	// Написати функцію, що видаляє стовпчик двовимірного масиву за вказаним номером.




	//  III
	cout << "\n\tIII" << endl;
	// Дано матрицю порядку MxN (M рядків, N стовпців). Необхідно заповнити її значеннями
	// і написати функцію, що здійснює циклічний зсув рядків та/або стовпчиків масиву
	// вказану кількість разів і в зазначену сторону.




	return 0;
}
#include<iostream>
#include<Windows.h>
#include<iomanip>

using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	srand(time(0));

	// Створіть двовимірний масив. Заповніть його випадковими числами та покажіть на екран.
	// Користувач обирає кількість зсувів і положення (ліворуч, праворуч, вгору, вниз).
	// Виконати зсув масиву і показати на екран отриманий результат. Зсув циклічний.
	// Наприклад, якщо ми маємо такий масив :
	// 1 2 0 4 5 3
	// 4 5 3 9 0 1
	// і користувач вибрав зсув на 2 розряди вправо, то ми отримаємо :
	// 5 3 1 2 0 4
	// 0 1 4 5 3 9

	const int row = 4, col = 6;
	int arr[row][col];
	int min = 0, max = 9;
	for (size_t j = 0; j < row; j++)
	{
		for (size_t i = 0; i < col; i++)
		{
			arr[j][i] = rand() % (max - min + 1) + min;
		}
	}
	for (size_t j = 0; j < row; j++)
	{
		for (size_t i = 0; i < col; i++)
		{
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}
	cout << endl;

	int dir, shift;
	cout << "1 - left \n2 - right \n3 - up \n4 - down" << endl;
	cout << "Choose shift direction: ";
	cin >> dir;
	cout << "Choose shift length: ";
	cin >> shift;

	int a[row][col];
	switch (dir)
	{
	case 1:
		for (size_t j = 0; j < row; j++)
		{
			for (size_t i = 0; i < col; i++)
			{
				a[j][i] = arr[j][(i + shift) % col];
			}
		}
		break;
	case 2:
		for (size_t j = 0; j < row; j++)
		{
			for (size_t i = 0; i < col; i++)
			{
				a[j][i] = arr[j][(i - shift + col) % col];
			}
		}
		break;
	case 3:
		for (size_t j = 0; j < row; j++)
		{
			for (size_t i = 0; i < col; i++)
			{
				a[j][i] = arr[(j + shift) % row][i];
			}
		}
		break;
	case 4:
		for (size_t j = 0; j < row; j++)
		{
			for (size_t i = 0; i < col; i++)
			{
				a[j][i] = arr[(j - shift + row) % row][i];
			}
		}
		break;
	default:
		break;
	}
	for (size_t j = 0; j < row; j++)
	{
		for (size_t i = 0; i < col; i++)
		{
			arr[j][i] = a[j][i];
		}
	}

	for (size_t j = 0; j < row; j++)
	{
		for (size_t i = 0; i < col; i++)
		{
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}
	cout << endl;


	return 0;
}

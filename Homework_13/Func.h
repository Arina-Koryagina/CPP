#pragma once
#include<iostream>
#include<Windows.h>
#include<iomanip>

using namespace std;

enum Color
{
	Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5, Brown = 6, LightGray = 7, DarkGray = 8,
	LightBlue = 9, LightGreen = 10, LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15
};

void SetColor(int text, int background)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)((background << 4) | text));
}

template<class T>
void printArray(T* arr)
{
	int size = _msize(arr) / sizeof(T);
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<class T>
void createArray(T**& arr, int row, int col)
{
	arr = new T * [row];
	for (size_t i = 0; i < row; i++)
	{
		arr[i] = new T[col];
	}
}

template<class T>
void setArray(T** arr, int minValue = 0, int maxValue = 9)
{
	int row = _msize(arr) / sizeof(T*);
	int col = _msize(*arr) / sizeof(T);
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % (maxValue - minValue + 1) + minValue;
		}
	}
}

template<class T>
void printArray(T** arr)
{
	int row = _msize(arr) / sizeof(T*);
	int col = _msize(*arr) / sizeof(T);
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

template<class T>
void deleteArray(T**& arr)
{
	int size = _msize(arr) / sizeof(T*);
	for (size_t i = 0; i < size; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = nullptr;
}

int** multiplyMatrix(int** a, int** b)
{
	int col = _msize(*a) / sizeof(int);
	int row = _msize(b) / sizeof(int*);
	if (col != row)
	{
		return nullptr;
	}

	int j = col;
	row = _msize(a) / sizeof(int*);
	col = _msize(*b) / sizeof(int);
	int** c = nullptr;
	createArray(c, row, col);
	for (int m = 0; m < row; m++)
	{
		for (int p = 0; p < col; p++)
		{
			c[m][p] = 0;
			for (int n = 0; n < j; n++)
			{
				c[m][p] += a[m][n] * b[n][p];
			}
		}
	}

	return c;
}
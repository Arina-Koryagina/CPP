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

void printLine(int size = 100, char symb = '-')
{
	for (int i = 0; i < size; i++)
	{
		cout << symb;
	}
	cout << endl;
}

template<class T>
void createArray(T**& arr, int row, int col)
{
	arr = new T * [row];
	for (int i = 0; i < row; i++)
	{
		arr[i] = new T[col];
	}
}

template<class T>
void setArray(T* arr, int minValue = 0, int maxValue = 9)
{
	int size = _msize(arr) / sizeof(T);
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
}

template<class T>
void setArray(T** arr, int minValue = 0, int maxValue = 9)
{
	int row = _msize(arr) / sizeof(T*);
	int col = _msize(*arr) / sizeof(T);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % (maxValue - minValue + 1) + minValue;
		}
	}
}

template<class T>
void printArray(T* arr)
{
	int size = _msize(arr) / sizeof(T);
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<class T>
void printArray(T** arr)
{
	int row = _msize(arr) / sizeof(T*);
	int col = _msize(*arr) / sizeof(T);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
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
	for (int i = 0; i < size; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = nullptr;
}

template<class T>
bool equals(const T& a, const T& b)
{
	return a == b;
}

template<class T>
int findValue(T* arr, int size, const T& value, bool(*method)(const T&, const T&) = equals)
{
	for (int i = 0; i < size; i++)
	{
		if (comparer(arr[i], value))
		{
			return i;
		}
	}

	return -1;
}

template<class T>
void addValueArray(T*& arr, int& size, T value)
{
	T* temp = new T[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[size] = value;
	delete[] arr;
	size++;
	arr = temp;
}
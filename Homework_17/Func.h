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

void printArray(char** arr)
{
	int lines = _msize(arr) / sizeof(char*);
	for (int i = 0; i < lines; i++)
	{
		cout << arr[i] << endl;
	}
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

void addValueArray(char**& arr, int& size, const char* value)
{
	char** temp = new char* [size + 1];
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[size] = new char[strlen(value) + 1];
	strcpy_s(temp[size], strlen(value) + 1, value);
	delete[] arr;
	arr = temp;
	size++;
}

template<class T>
bool asc(const T& a, const T& b)
{
	return strcmp(a, b) > 0;
}

template<class T>
bool desc(const T& a, const T& b)
{
	return strcmp(a, b) < 0;
}

bool compareString(char* const& s1, char* const& s2)
{
	return strcmp(s1, s2) > 0;
}

bool equalString(char* const& s1, char* const& s2)
{
	return strcmp(s1, s2) == 0;
}

template<class T, class U>
void bubbleSort(T* arr, U* second, int size, bool(*method)(const T&, const T&) = asc)
{
	for (int j = 0; j < size - 1; j++)
	{
		for (int i = 0; i < size - 1 - j; i++)
		{
			if (method(arr[i], arr[i + 1]))
			{
				swap(arr[i], arr[i + 1]);
				swap(second[i], second[i + 1]);
			}
		}
	}
}

template<class T, class U>
bool equals(const T& a, const U& b)
{
	return a == b;
}

template<class T, class U>
int findValue(T* arr, int size, const U& value, bool(*method)(const T&, const U&) = equals)
{
	for (int i = 0; i < size; i++)
	{
		if (method(arr[i], value))
		{
			return i;
		}
	}

	return -1;
}
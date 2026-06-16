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
void setArray(T* arr, int size, int minValue = 0, int maxValue = 9)
{
	srand(time(0));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
}

template<class T>
void printArray(T* arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<class T>
T* addValueArray(T* arr, int* size, T value)
{
	T* temp = new T[*size + 1];
	for (size_t i = 0; i < *size; i++)
	{
		temp[i] = arr[i];
	}
	temp[*size] = value;
	delete[] arr;
	(*size)++;

	return temp;
}

template<class T>
T* delValueArray(T* arr, int* size)
{
	T* temp = new T[*size - 1];
	for (size_t i = 0; i < *size - 1; i++)
	{
		temp[i] = arr[i];
	}
	delete[] arr;
	(*size)--;

	return temp;
}

template<class T>
T* newUniqueArray(T* a, T* b, int m, int n, int* size)
{
	int s = 0;
	T* temp = new T[m];
	for (size_t j = 0; j < m; j++)
	{
		bool adding = true;
		for (size_t i = 0; i < n; i++)
		{
			if (a[j] == b[i])
			{
				adding = false;
				break;
			}
		}
		if (adding)
		{
			for (size_t i = 0; i < s; i++)
			{
				if (a[j] == temp[i])
				{
					adding = false;
					break;
				}
			}
		}
		if (adding)
		{
			temp[s++] = a[j];
		}
	}

	*size = s;
	return temp;
}

template<class T>
T* checkArray(T* temp, T* a, T* b, int m, int n, int* size)
{
	int s = *size;
	for (size_t j = 0; j < m; j++)
	{
		bool adding = true;
		for (size_t i = 0; i < n; i++)
		{
			if (a[j] == b[i])
			{
				adding = false;
				break;
			}
		}
		if (adding)
		{
			for (size_t i = 0; i < s; i++)
			{
				if (a[j] == temp[i])
				{
					adding = false;
					break;
				}
			}
		}
		if (adding)
		{
			temp[s++] = a[j];
		}
	}

	*size = s;
	return temp;
}

template<class T>
T* newCompletelyUniqueArray(T* a, T* b, int m, int n, int* size)
{
	T* temp = new T[m + n];
	*size = 0;
	temp = checkArray(temp, a, b, m, n, size);
	temp = checkArray(temp, b, a, n, m, size);

	return temp;
}
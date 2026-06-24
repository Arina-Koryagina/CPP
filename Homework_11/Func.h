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

void setArray(int* arr, int size, int minValue = 0, int maxValue = 9)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
}

template<class T>
void printArray(T* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<class T>
T maxFunc(T* arr, int size)
{
	T maxValue = arr[0];
	for (size_t i = 1; i < size; i++)
	{
		if (arr[i] > maxValue)
		{
			maxValue = arr[i];
		}
	}

	return maxValue;
}

template<class T>
T getMax(T* a, int m, T* b, int n)
{
	T one = maxFunc(a, m);
	T two = maxFunc(b, n);
	if (one > two)
	{
		return one;
	}
	else
	{
		return two;
	}
}

template<class T>
T minFunc(T* arr, int size)
{
	T minValue = arr[0];
	for (size_t i = 1; i < size; i++)
	{
		if (arr[i] < minValue)
		{
			minValue = arr[i];
		}
	}

	return minValue;
}

template<class T>
T getMin(T* a, int m, T* b, int n)
{
	T one = minFunc(a, m);
	T two = minFunc(b, n);
	if (one > two)
	{
		return two;
	}
	else
	{
		return one;
	}
}

template<class T>
float avgFunc(T* arr, int size)
{
	T value = arr[0];
	for (size_t i = 1; i < size; i++)
	{
		value += arr[i];
	}

	return value / size;
}

template<class T>
T getAvg(T* a, int m, T* b, int n)
{
	return (avgFunc(a, m) + avgFunc(b, n)) / 2;
}
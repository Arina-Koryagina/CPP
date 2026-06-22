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

// Функція розподілу динамічної пам'яті
int* createArray(int size)
{
	int* arr = new int[size];

	return arr;
}

// Функція ініціалізації динамічного масиву
void setArray(int* arr, int size, int minValue = 0, int maxValue = 9)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
}

// Функція друку динамічного масиву
template<class T>
void printArray(T* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

// Функція видалення динамічного масиву
template<class T>
void deleteArray(T*& arr)
{
	delete[] arr;
	arr = nullptr;
}

// Функція додавання елемента в кінець масиву
template<class T>
T* addValueArray(T*& arr, int& size, T value)
{
	T* temp = new T[size + 1];
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[size] = value;
	delete[] arr;

	(size)++;
	return temp;
}

// Функція вставки елемента за вказаним індексом
template<class T>
T* addValueArray(T*& arr, int& size, T value, int ind)
{
	T* temp = new T[size + 1];
	for (size_t i = 0; i < ind; i++)
	{
		temp[i] = arr[i];
	}
	temp[ind] = value;
	for (size_t i = 0; i < size - ind; i++)
	{
		temp[i + 1 + ind] = arr[i + ind];
	}
	delete[] arr;

	(size)++;
	return temp;
}

// Функція видалення елемента за вказаним індексом
template<class T>
T* delValueArray(T*& arr, int& size, int ind)
{
	T* temp = new T[size - 1];
	for (size_t i = 0; i < ind; i++)
	{
		temp[i] = arr[i];
	}
	for (size_t i = 0; i < size - ind - 1; i++)
	{
		temp[i + ind] = arr[i + 1 + ind];
	}
	delete[] arr;

	(size)--;
	return temp;
}
#pragma once
#include<iostream>
#include<Windows.h>

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

//void starLine()
//{
//	for (size_t i = 0; i < 10; i++)
//	{
//		cout << "*";
//	}
//	cout << endl;
//}
//
//void starLine(int size)
//{
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << "*";
//	}
//	cout << endl;
//}

void starLine(int size=10, char symbol='*')
{
	for (size_t i = 0; i < size; i++)
	{
		cout << symbol;
	}
	cout << endl;
}

float avgNum(int a, int b, int c)
{
	float avg = (a + b + c) / 3.f;

	return avg;
}

void setArray(int arr[], int size, int minValue = 0, int maxValue = 9)
{
	srand(time(0));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
}

void printArray(int arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void ascBubbleSort(int arr[], int size)
{
	for (size_t j = 0; j < size-1; j++)
	{
		for (size_t i = 0; i < size-1-j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				/*int a = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = a;*/
			}
		}
	}
}

int findValue(int arr[], int size, int value)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == value)
		{
			return i;
		}
	}

	return -1;
}

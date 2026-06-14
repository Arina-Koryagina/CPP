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

void setArray(int arr[], int size, int min = 0, int max = 20)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
}

void printArray(int arr[], int size, int start = 0)
{
	for (int i = start; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

void bubbleSort(int arr[], int size, bool reverse = false, int start = 0)
{
	if (reverse)
	{
		for (size_t j = start; j < size - 1; j++)
		{
			for (size_t i = start; i < size - 1 - (j - start); i++)
			{
				if (arr[i] < arr[i + 1])
				{
					swap(arr[i], arr[i + 1]);
				}
			}
		}
	}
	else
	{
		for (size_t j = start; j < size - 1; j++)
		{
			for (size_t i = start; i < size - 1 - (j - start); i++)
			{
				if (arr[i] > arr[i + 1])
				{
					swap(arr[i], arr[i + 1]);
				}
			}
		}
	}
}

void insertionSort(int arr[], int size, int start = 0)  // https://www.geeksforgeeks.org/dsa/insertion-sort-algorithm/
{
	for (int i = start + 1; i < size; i++)
	{
		int key = arr[i];
		int j = i - 1;

		while (j >= start && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = key;
	}
}

int findIndex(int arr[], int size, bool order = true) // order: T - first, F - last
{
	if (order)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] < 0)
			{
				return i;
			}
		}
	}
	else
	{
		for (int i = size - 1; i >= 0; i--)
		{
			if (arr[i] < 0)
			{
				return i;
			}
		}
	}

	return -1;
}

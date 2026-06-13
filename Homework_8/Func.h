#pragma once
#include<iostream>
#include<Windows.h>
#include<iomanip>

using namespace std;

void setArray(int arr[], int size, int min = 0, int max = 20)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
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

void bubbleSort(int arr[], int size, bool reverse = false)
{
	if (reverse)
	{
		for (size_t j = 0; j < size - 1; j++)
		{
			for (size_t i = 0; i < size - 1 - j; i++)
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
		for (size_t j = 0; j < size - 1; j++)
		{
			for (size_t i = 0; i < size - 1 - j; i++)
			{
				if (arr[i] > arr[i + 1])
				{
					swap(arr[i], arr[i + 1]);
				}
			}
		}
	}
}

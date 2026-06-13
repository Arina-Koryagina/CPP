#pragma once
#include<iostream>
#include<Windows.h>
#include<iomanip>

using namespace std;

template<class T>
void ascBubbleSort(T arr[], int size)
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

int binarySearch(int arr[], int size, int x)
{
	int start = 0;
	int end = size - 1;
    while (start <= end)
    {
        int index = (start + end) / 2;

        if (arr[index] == x)
        {
            return index;
        }
        else if (arr[index] < x)
        {
            start = index + 1;
        }
        else
        {
            end = index - 1;
        }
    }

    return -1;
}

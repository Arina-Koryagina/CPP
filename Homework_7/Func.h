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

int numLength(int num)
{
    int size = 0;
    do
    {
        num /= 10;
        size++;
    } while (num > 0);

    return size;
}

void numConvert(int bin[], int size, int num)
{
    for (size_t i = 0; i < size; i++)
    {
        bin[i] = num % 10;
        num /= 10;
    }
}

int bin_to_dec(int bin[], int size)
{
    int dec = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (bin[i] == 1)
        {
            dec += pow(2, i);
        }
    }

    return dec;
}

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
void createArray(T**& arr, int row, int col)
{
	arr = new T * [row];
	for (size_t i = 0; i < row; i++)
	{
		arr[i] = new T[col];
	}
}

template<class T>
void setArray(T* arr, int size, int minValue = 0, int maxValue = 9)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
}

template<class T>
void setArray(T** arr, int row, int col, int minValue = 0, int maxValue = 9)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % (maxValue - minValue + 1) + minValue;
		}
	}
}

template<class T>
void printArray(T** arr)
{
	int block = _msize(arr);
	int row = block / sizeof(T*);
	block = _msize(*arr);
	int col = block / sizeof(T);
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
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
	int block = _msize(arr);
	int size = block / sizeof(T*);
	for (size_t i = 0; i < size; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = nullptr;
}

template<class T>
void addColArray(T**& arr, int row, int& col, int ind, T* newCol = nullptr)
{
	T** temp = nullptr;
	createArray(temp, row, col + 1);
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < ind; j++)
		{
			temp[i][j] = arr[i][j];
		}
		temp[i][ind] = (newCol != nullptr) ? newCol[i] : 0;
		for (size_t j = ind; j < col; j++)
		{
			temp[i][j + 1] = arr[i][j];
		}
	}
	delete[] arr;
	col++;
	arr = temp;
}

template<class T>
void delColArray(T**& arr, int row, int& col, int ind)
{
	T** temp = nullptr;
	createArray(temp, row, col - 1);
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < ind; j++)
		{
			temp[i][j] = arr[i][j];
		}
		for (size_t j = ind; j < col; j++)
		{
			temp[i][j] = arr[i][j + 1];
		}
	}
	delete[] arr;
	col--;
	arr = temp;
}

template<class T>
void leftShift(T** a, T** arr, int row, int col, int shift)
{
	for (size_t j = 0; j < row; j++)
	{
		for (size_t i = 0; i < col; i++)
		{
			a[j][i] = arr[j][(i + shift) % col];
		}
	}
}

template<class T>
void rightShift(T** a, T** arr, int row, int col, int shift)
{
	for (size_t j = 0; j < row; j++)
	{
		for (size_t i = 0; i < col; i++)
		{
			a[j][i] = arr[j][(i - shift + col) % col];
		}
	}
}

template<class T>
void upShift(T** a, T** arr, int row, int col, int shift)
{
	for (size_t j = 0; j < row; j++)
	{
		for (size_t i = 0; i < col; i++)
		{
			a[j][i] = arr[(j + shift) % row][i];
		}
	}
}

template<class T>
void downShift(T** a, T** arr, int row, int col, int shift)
{
	for (size_t j = 0; j < row; j++)
	{
		for (size_t i = 0; i < col; i++)
		{
			a[j][i] = arr[(j - shift + row) % row][i];
		}
	}
}

template<class T>
void shiftArray(T**& arr, int m, int n, int shift, void(*oper)(T**, T**, int, int, int))
{
	T** a = nullptr;
	createArray(a, m, n);
	oper(a, arr, m, n, shift);
	deleteArray(arr);
	arr = a;
}

template<class T>
void shiftRowArray(T**& arr, int m, int n)
{
	void(*direction[])(T**, T**, int, int, int) = { leftShift, rightShift, upShift, downShift };
	int dir, shift;
	cout << "\n1 - up \n2 - down" << endl;
	cout << "Choose row shift direction: ";
	cin >> dir;
	cout << "Choose row shift length: ";
	cin >> shift;
	shiftArray(arr, m, n, shift, direction[dir + 1]);
}

template<class T>
void shiftColArray(T**& arr, int m, int n)
{
	void(*direction[])(T**, T**, int, int, int) = { leftShift, rightShift, upShift, downShift };
	int dir, shift;
	cout << "\n1 - left \n2 - right" << endl;
	cout << "Choose col shift direction: ";
	cin >> dir;
	cout << "Choose col shift length: ";
	cin >> shift;
	shiftArray(arr, m, n, shift, direction[dir - 1]);
}
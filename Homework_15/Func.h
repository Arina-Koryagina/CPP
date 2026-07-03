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

struct Point
{
	char name;
	int x;
	int y;
};

void printPoint(Point p)
{
	cout << p.name << " (" << p.x << "; " << p.y << ")" << endl;
}

double getLen(int x1, int y1, int x2, int y2)
{
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
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
void transposeMatrix(T**& arr)
{
	int col = _msize(arr) / sizeof(T*);
	int row = _msize(*arr) / sizeof(T);
	T** temp = nullptr;
	createArray(temp, row, col);
	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i < row; i++)
		{
			temp[i][j] = arr[j][i];
		}
	}
	deleteArray(arr);
	arr = temp;
}

void** setList(const char** names, int* nums, int size)
{
	void** list = new void* [size * 2];
	for (int i = 0; i < size; i++)
	{
		list[i * 2] = (void*)names[i];
		list[i * 2 + 1] = (void*)&nums[i];
	}

	return list;
}

void copyList(void**& _old, void** _new, int size)
{
	for (int i = 0; i < size * 2; i++)
	{
		_new[i] = _old[i];
	}
	_old = _new;
}

void printList(void** list, int size)
{
	for (int i = 0; i < size; i++)
	{
		int num = *(int*)list[i * 2 + 1];
		cout << i+1 << ". " << (char*)list[i * 2] << endl;
		cout << "+44-20-" << num / 10000 << "-";
		num %= 10000;
		if (num < 1000){cout << "0";}
		if (num < 100){cout << "0";}
		if (num < 10){cout << "0";}
		cout << num << endl;
		//cout << "+4420" << (int)list[i * 2 + 1] << endl;
	}
	cout << endl;
}

void editList(void**& list, int& size, int op)
{
	cout << endl;
	switch (op)
	{
	case 0:
		for (int j = 0; j < size - 1; j++)
		{
			for (int i = 0; i < size - 1 - j; i++)
			{
				char* s1 = (char*)list[i * 2];
				char* s2 = (char*)list[i * 2 + 2];
				if (strcmp(s1, s2) > 0)
				{
					swap(list[i * 2], list[i * 2 + 2]);
					swap(list[i * 2 + 1], list[i * 2 + 3]);
				}
			}
		}
		break;
	case 1:
		for (int j = 0; j < size - 1; j++)
		{
			for (int i = 0; i < size - 1 - j; i++)
			{
				char* s1 = (char*)list[i * 2];
				char* s2 = (char*)list[i * 2 + 2];
				if (strcmp(s2, s1) > 0)
				{
					swap(list[i * 2], list[i * 2 + 2]);
					swap(list[i * 2 + 1], list[i * 2 + 3]);
				}
			}
		}
		break;
	case 2:
	{
		void** temp = new void* [(size + 1) * 2];
		copyList(list, temp, size);
		char* name = new char[50];
		int* phone = new int;

		cin.ignore();
		cout << "Enter new name: "; cin.getline(name, 50);
		do
		{
			cout << "Enter new number (last 8 digits): +4420"; cin >> *phone;
			if (*phone < 10000000 || *phone > 99999999)
			{
				cout << "Wrong number!" << endl;
			}
		} while (*phone < 10000000 || *phone > 99999999);

		list[size * 2] = name;
		list[size * 2 + 1] = phone;
		size++;
		break;
	}
	case 3:
	{
		void** temp = new void* [(size - 1) * 2];
		int index;

		do 
		{
			cout << "Enter the index: "; cin >> index; 
			if (index < 1 || index >= size)
			{
				cout << "Wrong index!" << endl;
			}
		} while (index < 1 || index > size);

		index--;
		for (int i = 0; i < index; i++)
		{
			temp[i * 2] = list[i * 2];
			temp[i * 2 + 1] = list[i * 2 + 1];
		}
		for (int i = index; i < size - 1; i++)
		{
			temp[i * 2] = list[(i + 1) * 2];
			temp[i * 2 + 1] = list[(i + 1) * 2 + 1];
		}

		delete[] list;
		list = temp;
		size--;
		break;
	}
	default:
		break;
	}
	printList(list, size);
}
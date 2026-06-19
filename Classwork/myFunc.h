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

template<class T>
double avg3(T a, T b, T c)
{
	return (a + b + c) / 3.;
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
void printArray(T* arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
//template<class T>
//T* addValueArray(T* arr, int* size, int adding, T value, bool random = true, int minValue = 0, int maxValue = 9)
//{
//	T* temp = new T [*size + 1];
//	for (size_t i = 0; i < *size; i++)
//	{
//		temp[i] = arr[i];
//	}
//	if (random)
//	{
//		for (size_t i = 0; i < adding; i++)
//		{
//			temp[*size + i] = rand() % (maxValue - minValue + 1) + minValue;
//		}
//	}
//	else
//	{
//		for (size_t i = 0; i < adding; i++)
//		{
//			T newValue;
//			cout << "Enter new value: ";
//			cin >> newValue;
//			temp[*size + i] = newValue;
//		}
//	}
//	delete[] arr;
//	(*size)++;
//	return temp;
//}

//template<class T>
//T* addValueArray(T* arr, int* size, T value)
//{
//	T* temp = new T[*size + 1];
//	for (size_t i = 0; i < *size; i++)
//	{
//		temp[i] = arr[i];
//	}
//	temp[*size] = value;
//	delete[] arr;
//	(*size)++;
//	return temp;
//}

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

//int* extendArray(int* arr, int size, int adding, int minValue = 0, int maxValue = 9)
//{
//	int newSize = size + adding;
//	int* np = new int[newSize];
//	for (int i = 0; i < newSize; i++)
//	{
//		np[i] = arr[i];
//	}
//
//	delete[] arr;
//	arr = np;
//	for (int i = size; i < newSize; i++)
//	{
//		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
//	}
//
//	return arr;
//}

template<class T>
void ascBubbleSort(T* arr, int size, int startInd=0, int endInd=size-1)
{
	for (size_t j = startInd; j < endInd; j++)
	{
		for (size_t i = startInd; i < endInd -j; i++)
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

template<class T>
int findValue(T* arr, int size, T value, int action=0)
{
	switch (action)
	{
	case 0:
		for (int i = 0; i < size; i++)
		{
			if (arr[i] == value)
			{
				return i;
			}
		}
		break;
	case 1:
		for (int i = 0; i < size; i++)
		{
			if (arr[i] < value)
			{
				return i;
			}
		}
		break;
	case 2:
		for (int i = size-1; i >= 0; i--)
		{
			if (arr[i] < value)
			{
				return i;
			}
		}
		break;
	default:
		break;
	}

	return -1;
}

template<class T>
T maxValueArray(T* arr, int size)
{
	T maxValue = arr[0];
	for (size_t i = 1; i < size; i++)
	{
		if (arr[i] > maxValue) {
			maxValue = arr[i];
		}
	}

	return maxValue;
}

template<class T>
int countValueArray(T* arr, int size, T& value)
{
	int countValue = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == value)
		{
			countValue++;
		}
	}

	return countValue;
}

template<class T>
T sumValueArray(T* arr, int size)
{
	T sumValue = arr[0];
	for (size_t i = 1; i < size; i++)
	{
		sumValue += arr[i];
	}

	return sumValue;
}

template<class T1, class T2, class T3>
auto Sum(T1 a, T2 b, T3 c) -> decltype(a+b)
{
	return a + b + c;
}

void rec()
{
	static int a = 0;
	a++;
	rec();
}

int* sumProdArray(int* arr, int size)
{
	int* res = new int[2] {0, 1};
	//int res[2] = { 0, 1 };
	for (size_t i = 0; i < size; i++)
	{
		res[0] += arr[i];
		res[1] *= arr[i];
	}

	return res;
}

int* findSubArray(int *a, int m, int *b, int n)
{
	for (size_t i = 0; i < m-n; i++)
	{
		if (a[i] == b[0])
		{
			bool ans = true;
			for (size_t j = 1; j < n; j++)
			{
				if (a[i+j] != b[j])
				{
					ans = false;
				}
			}
			if (ans)
			{
				return &b[0];
			}
			else
			{
				return nullptr;
			}
		}
	}
}

void inc(int& a)
{
	a++;
}

template<class T>
void addValueArray(T*& arr, int& size, T value)
{
	T* temp = new T[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[size] = value;
	delete[] arr;
	size++;
	arr = temp;
}

template<class T>
int findArray(T* arr, int size, const T& key)
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}

	return -1;
}

template<class T>
void setNewArray(T*& a, int m, T*& b, int n, T* c, int& size)
{
	size = m + n;
	int* c = new int[size];
	for (size_t i = 0; i < m; i++)
	{
		c[i] = a[i];
	}
	for (size_t i = 0; i < n; i++)
	{
		c[m + i] = b[i];
	}
}

template<class T>
void setNewArray(T*& a, int m, T*& b, int n, T* c, int& size, int ind)
{
	size = m + n;
	int* c = new int[size];
	for (size_t i = 0; i < ind; i++)
	{
		c[i] = a[i];
	}
	for (size_t i = 0; i < n; i++)
	{
		c[i + ind] = b[i];
	}
	for (size_t i = 0; i < m - ind; i++)
	{
		c[i + ind + n] = a[i + ind];
	}
}

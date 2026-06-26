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

void starLine(int size = 10, char symbol = '*')
{
	for (size_t i = 0; i < size; i++)
	{
		cout << symbol;
	}
	cout << endl;
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

template<class T>
void printArray(T* arr)
{
	int size = _msize(arr) / sizeof(T);
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<class T>
void createArray(T**& arr, int row, int col)
{
	arr = new T* [row];
	for (size_t i = 0; i < row; i++)
	{
		arr[i] = new T[col];
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
void setArray(T** arr, int minValue = 0, int maxValue = 9)
{
	int row = _msize(arr) / sizeof(T*);
	int col = _msize(*arr) / sizeof(T);
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % (maxValue - minValue + 1) + minValue;
		}
	}
}

template<class T>
void printArray(T** arr, int row, int col)
{
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
void printArray(T** arr)
{
	int row = _msize(arr) / sizeof(T*);
	int col = _msize(*arr) / sizeof(T);
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
void printArray(T*** arr)
{
	int a = _msize(arr) / sizeof(T**);
	for (int k = 0; k < a; k++)
	{
		int row = _msize(arr[k]) / sizeof(T*);
		int col = _msize(*arr[k]) / sizeof(T);
		printArray(arr[k], row, col);
		/*for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cout << arr[k][i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;*/
	}
	cout << endl;
}

template<class T>
void deleteArray(T**& arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = nullptr;
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

int getDevisorCount(int n)
{
	int k = 0;
	for (size_t i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			k++;
		}
	}

	return k;
}

void getDevisors(int*& arr, int num, int a)
{
	int* devisors = new int[a];
	int ind = 0;
	for (int n = num - 1; n >= 2; n--)
	{
		if (num % n == 0)
		{
			devisors[ind++] = num / n;
		}
	}
	delete[] arr;
	arr = devisors;
}

int*** set3DArray(int* p)
{
	int num = _msize(p) / sizeof(int);
	int a = getDevisorCount(num);
	int*** arr = new int** [a];
	int* rowsArray = new int[a];
	getDevisors(rowsArray, num, a);

	for (int k = 0; k < a; k++)
	{
		int row = rowsArray[k];
		int col = num / row;
		createArray(arr[k], row, col);
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				arr[k][i][j] = p[j + (i * col)];
			}
		}
	}

	return arr;
}

int** multiplyMatrix(int** a, int** b, int row, int col)
{
	int** c = nullptr;
	createArray(c, row, col);

}

//template<class T>
//void addRowArray(T**& arr, int& row, int col)
//{
//	T** temp = new T*[row + 1];
//	createArray(temp, row + 1, col);
//	for (size_t i = 0; i < row; i++)
//	{
//		for (size_t j = 0; j < col; j++)
//		{
//			temp[i][j] = arr[i][j];
//		}
//	}
//	setArray(temp[row], col);
//	deleteArray(temp);
//	row++;
//	arr = temp;
//}

template<class T>
void addEndRowArray(T**& arr, int& row, int col, T* newRow = nullptr)
{
	T** temp = new T*[row + 1];
	for (size_t i = 0; i < row; i++)
	{
		temp[i] = arr[i];
	}
	temp[row] = new T[col];
	for (size_t i = 0; i < col; i++)
	{
		temp[row][i] = (newRow != nullptr) ? newRow[i] : 0;
	}
	//deleteArray(arr);
	delete[] arr;
	row++;
	arr = temp;
}

template<class T>
void addStartRowArray(T**& arr, int& row, int col, T* newRow = nullptr)
{
	T** temp = new T * [row + 1];
	temp[0] = new T[col];
	for (size_t i = 0; i < col; i++)
	{
		temp[0][i] = (newRow != nullptr) ? newRow[i] : 0;
	}
	for (size_t i = 0; i < row; i++)
	{
		temp[i+1] = arr[i];
	}
	delete[] arr;
	row++;
	arr = temp;
}

template<class T>
void addRowArray(T**& arr, int& row, int col, int ind, T* newRow = nullptr)
{
	T** temp = new T * [row + 1];
	for (size_t i = 0; i < ind; i++)
	{
		temp[i] = arr[i]; 
	}
	temp[ind] = new T[col];
	for (size_t i = 0; i < col; i++)
	{
		temp[ind][i] = (newRow != nullptr) ? newRow[i] : 0;
	}
	for (size_t i = ind; i < row; i++)
	{
		temp[i+1] = arr[i];
	}
	delete[] arr;
	row++;
	arr = temp;
}

template<class T>
void delRowArray(T**& arr, int& row, int col, int ind)
{
	T** temp = new T * [row - 1];
	for (size_t i = 0; i < ind; i++)
	{
		temp[i] = arr[i]; 
	}
	for (size_t i = ind; i < row; i++)
	{
		temp[i] = arr[i+1];
	}
	delete[] arr;
	row--;
	arr = temp;
}

template<class T>
int findValue(T* arr, int size, T value)
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

template<class T>
void adjustArray(T**& arr, int& row, int col)
{
	for (size_t i = 0; i < row; i++)
	{
		if (findValue(arr[i], col, 0) != -1)
		{
			delRowArray(arr, row, col, i);
		}
	}
}

template<class T>
T* addValueArray(T*& arr, int& size, int ind, T value = 0)
{
	T* temp = new T[size + 1];
	for (size_t i = 0; i < ind; i++)
	{
		temp[i] = arr[i];
	}
	temp[ind] = value;
	for (size_t i = ind; i < size; i++)
	{
		temp[i + 1] = arr[i];
	}
	delete[] arr;

	size++;
	return temp;
}

template<class T>
void addColArray(T**& arr, int row, int& col, int ind, T* newCol = nullptr)
{
	for (size_t i = 0; i < row; i++)
	{
		addValueArray(arr[i], col, ind, newCol[i]);
		col--;
	}
	col++;
}


//template<class T>
//bool asc(const T& a, const T& b)
//{
//	return a > b;
//}
//
//template<class T>
//bool dec(const T& a, const T& b)
//{
//	return a < b;
//}
//
//template<class T>
//void bubbleSort(T* arr, int size, bool(*method)(const T&, const T&) = asc)
//{
//	for (size_t j = 0; j < size - 1; j++)
//	{
//		for (size_t i = 0; i < size - 1 - j; i++)
//		{
//			if (method(arr[i], arr[i + 1]))
//			{
//				swap(arr[i], arr[i + 1]);
//			}
//		}
//	}
//}
//
//template<class T>
//T maxValueArray(T* arr, int size)
//{
//	T maxValue = arr[0];
//	for (size_t i = 1; i < size; i++)
//	{
//		if (arr[i] > maxValue) {
//			maxValue = arr[i];
//		}
//	}
//
//	return maxValue;
//}

//void hello()
//{
//	cout << "Hello" << endl;
//}
//void goodbye()
//{
//	cout << "Goodbye" << endl;
//}
// 
//int add(int a, int b)
//{
//	return a + b;
//}
//int subtract(int a, int b)
//{
//	return a - b;
//}
//int multiply(int a, int b)
//{
//	return a * b;
//}
//int divide(int a, int b)
//{
//	return a / b;
//}

//void pistol(int* bullets)
//{
//	cout << "->" << endl;
//	bullets[0]--;
//}
//void gun(int* bullets)
//{
//	cout << "-> -> -> -> ->" << endl;
//	bullets[1] -= 5;
//}
//void bow(int* bullets)
//{
//	cout << "-> -> ->" << endl;
//	bullets[2] -= 3;
//}
//
//void (*weapon(int* bullets))(int*)
//{
//	void(*weapons[])(int*) = { pistol, gun, bow };
//
//	return weapons[findValue(bullets, 3, maxValueArray(bullets, 3))];
//}

//void kopatel1()
//{
//	cout << "Digs one worker with a shovel" << endl;
//}
//void kopatel3()
//{
//	cout << "Dig three workers with shovels and pickaxes" << endl;
//}
//void exkavator()
//{
//	cout << "Digs an excavator, workers smoke in a corner.. ))" << endl;
//}
//
//void(*prorab(int len))()
//{
//	if (len <= 100)
//	{
//		return kopatel1;
//	}
//	else if (len <= 500)
//	{
//		return kopatel3;
//	}
//	else
//	{
//		return exkavator;
//	}
//}


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

//float avgNum(int a, int b, int c)
//{
//	float avg = (a + b + c) / 3.f;
//
//	return avg;
//}
//
//template<class T>
//double avg3(T a, T b, T c)
//{
//	return (a + b + c) / 3.;
//}
// 
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

//template<class T>
//T* delValueArray(T* arr, int* size)
//{
//	T* temp = new T[*size - 1];
//	for (size_t i = 0; i < *size - 1; i++)
//	{
//		temp[i] = arr[i];
//	}
//	delete[] arr;
//	(*size)--;
//
//	return temp;
//}

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
// 
//template<class T>
//void mTen(T& n)
//{
//	n *= 10;
//}
//
//template<class T>
//void forEach(T* p, int size, void(*func)(T&) = mTen)
//{
//	for (size_t i = 0; i < size; i++)
//	{
//		func(p[i]);
//	}
//}

//template<class T>
//void ascBubbleSort(T* arr, int size, int startInd=0, int endInd=size-1)
//{
//	for (size_t j = startInd; j < endInd; j++)
//	{
//		for (size_t i = startInd; i < endInd -j; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				swap(arr[i], arr[i + 1]);
//				/*int a = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = a;*/
//			}
//		}
//	}
//}

//template<class T>
//int findValue(T* arr, int size, T value, int action=0)
//{
//	switch (action)
//	{
//	case 0:
//		for (int i = 0; i < size; i++)
//		{
//			if (arr[i] == value)
//			{
//				return i;
//			}
//		}
//		break;
//	case 1:
//		for (int i = 0; i < size; i++)
//		{
//			if (arr[i] < value)
//			{
//				return i;
//			}
//		}
//		break;
//	case 2:
//		for (int i = size-1; i >= 0; i--)
//		{
//			if (arr[i] < value)
//			{
//				return i;
//			}
//		}
//		break;
//	default:
//		break;
//	}
//
//	return -1;
//}
//
//
//template<class T>
//int countValueArray(T* arr, int size, T& value)
//{
//	int countValue = 0;
//	for (size_t i = 0; i < size; i++)
//	{
//		if (arr[i] == value)
//		{
//			countValue++;
//		}
//	}
//
//	return countValue;
//}
//
//template<class T>
//T sumValueArray(T* arr, int size)
//{
//	T sumValue = arr[0];
//	for (size_t i = 1; i < size; i++)
//	{
//		sumValue += arr[i];
//	}
//
//	return sumValue;
//}
//
//template<class T1, class T2, class T3>
//auto Sum(T1 a, T2 b, T3 c) -> decltype(a+b)
//{
//	return a + b + c;
//}
//
//void rec()
//{
//	static int a = 0;
//	a++;
//	rec();
//}
//
//int* sumProdArray(int* arr, int size)
//{
//	int* res = new int[2] {0, 1};
//	//int res[2] = { 0, 1 };
//	for (size_t i = 0; i < size; i++)
//	{
//		res[0] += arr[i];
//		res[1] *= arr[i];
//	}
//
//	return res;
//}
//
//int* findSubArray(int *a, int m, int *b, int n)
//{
//	for (size_t i = 0; i < m-n; i++)
//	{
//		if (a[i] == b[0])
//		{
//			bool ans = true;
//			for (size_t j = 1; j < n; j++)
//			{
//				if (a[i+j] != b[j])
//				{
//					ans = false;
//				}
//			}
//			if (ans)
//			{
//				return &b[0];
//			}
//			else
//			{
//				return nullptr;
//			}
//		}
//	}
//}
//
//void inc(int& a)
//{
//	a++;
//}
//
//
//template<class T>
//int findArray(T* arr, int size, const T& key)
//{
//	for (size_t i = 0; i < size; i++)
//	{
//		if (arr[i] == key)
//		{
//			return i;
//		}
//	}
//
//	return -1;
//}
//
//template<class T>
//void setNewArray(T*& a, int m, T*& b, int n, T* c, int& size)
//{
//	size = m + n;
//	int* c = new int[size];
//	for (size_t i = 0; i < m; i++)
//	{
//		c[i] = a[i];
//	}
//	for (size_t i = 0; i < n; i++)
//	{
//		c[m + i] = b[i];
//	}
//}
//
//template<class T>
//void setNewArray(T*& a, int m, T*& b, int n, T* c, int& size, int ind)
//{
//	size = m + n;
//	int* c = new int[size];
//	for (size_t i = 0; i < ind; i++)
//	{
//		c[i] = a[i];
//	}
//	for (size_t i = 0; i < n; i++)
//	{
//		c[i + ind] = b[i];
//	}
//	for (size_t i = 0; i < m - ind; i++)
//	{
//		c[i + ind + n] = a[i + ind];
//	}
//}


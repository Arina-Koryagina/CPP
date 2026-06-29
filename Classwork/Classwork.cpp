#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<Windows.h>
#include<iomanip>
#include<conio.h>

#include"myFunc.h"

using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	//SetConsoleCP(1251);
	/*cout.setf(ios::boolalpha);*/
	//SetColor(Black, White);
	SetColor(White, Black);
	system("cls");
	srand(time(0));
	
	// 29/06/2026 -- Lesson 14

	/*char buffer[1024];
	cin.getline(buffer, 1024);
	int len = strlen(buffer);
	char* str = new char[len + 1];
	strcpy(str, buffer);*/
	
	//cout << countWords(str) << endl;
	//cout << isPalindrome(str) << endl;
	cout << mystrcmp("bcaAaaaAabnn", "bbaaABa123") << endl;
	cout << strcmp("bcaAaaaAabnn", "bbaaABa123") << endl;
	
	//cout << str << endl;

	//char st1[80], st2[80];
	//cout << "1: "; cin.getline(st1, 80);
	//cout << "2: "; cin.getline(st2, 80);

	//strcpy(st1, st2);
	//strncpy_s(st1, 80, st2, 3);
	//strcat(st1, st2);
	//strncat(st1, st2, 2);
	//cout << strcmp(st1, st2) << endl; // посимвольно до першого розходженн€
	//cout << strncmp(st1, st2, 3) << endl;
	//cout << _stricmp(st1, st2) << endl;
	//cout << _strnicmp(st1, st2, 3) << endl;

	//char* t = strchr(st1, 'a');
	//char* t = strrchr(st1, 'a');
	//char* t = strstr(st1, "ma");
	//if (t != nullptr) // (t)
	//{
	//	cout << t << endl;
	//}

	//_strset(st1, '*');
	//int a = atoi(st1);
	//long a = atol(st1);
	//double d = atof(st1);
	//cout << a << endl;

	//_itoa(100, st1, 10);

	/*cout << _strupr(st1) << endl;
	cout << _strlwr(st1) << endl;

	cout << isalnum('1') << endl;
	cout << isdigit('1') << endl;
	cout << isalpha('1') << endl;
	cout << isspace('1') << endl;
	cout << ispunct('1') << endl;
	cout << isprint('1') << endl;
	cout << isupper('1') << endl;
	cout << islower('1') << endl;*/

	//cout << "1: " << st1 << endl;
	//cout << "2: " << st2 << endl;


	//char buffer[1024];
	//cin.getline(buffer, 1024);
	//int len = strlen(buffer);
	//char* str = new char[len + 1];
	//strcpy(str, buffer);
	////str = removeSymbol(str, 'l');
	//cout << str << endl;
	//strcpy_s(str, len + 1, buffer);
	/*for (size_t i = 0; i < strlen(buffer) + 1; i++)
	{
		str[i] = buffer[i];
	}*/

	//char st[] = "Hello, World!"; //{ 'H', 'e', 'l', 'l', 'o', '\0'};
	//int a[5];
	//cout << a << endl;
	/*cout << st << endl;
	cout << "String length: ";
	cout << lenStr(st) << endl;
	cout << strlen(st) << endl;*/
	//cout << lenStr("st") << endl;


	// 26/06/2026 -- Lesson 13

	/*int** a = nullptr;
	int row_a = 4, col_a = 2;
	createArray(a, row_a, col_a);
	setArray(a);
	SetColor(Red, White);
	printArray(a);

	int** b = nullptr;
	int row_b = 2, col_b = 3;
	createArray(b, row_b, col_b);
	setArray(b);
	SetColor(Blue, White);
	printArray(b);

	int** c = multiplyMatrix(a, b);
	SetColor(Green, White);
	printArray(c);
	SetColor(Black, White);*/

	/*int n;
	cin >> n;
	int* p = new int[n];
	setArray(p, n);
	printArray(p);
	cout << endl;

	int*** p3 = nullptr;
	p3 = set3DArray(p);
	printArray(p3);*/

	//int*** p3 = new int**[2];
	//*p3 = new int*[2];
	//**p3 = new int[2];
	////***p3 = { {{0, 1}, {1, 0}}, {{1, 1}, {0, 0}} };
	//printArray(p3);

	/*double** a;
	a = new double*;
	*a = new double;
	**a = 5;*/
	/*double** a = ((new double*) = new double(5));
	cout << **a << endl;*/

	/*int row = 3, col = 4;
	int** p = nullptr;
	
	createArray(p, row, col);
	setArray(p, row, col);
	printArray(p);

	int* t = new int[col];
	setArray(t, col);

	addColArray(p, row, col, 2, t);
	delete[] t;
	printArray(p, row, col);*/


	// 24/06/2026 -- Lesson 12

	//int row = 5, col = 5;
	//int** p = nullptr;
	//
	//createArray(p, row, col);
	//setArray(p, row, col);
	////printArray(p, row, col);
	//printArray(p);

	//adjustArray(p, row, col);
	//printArray(p);

	/*int* t = new int[col];
	setArray(t, col);

	addEndRowArray(p, row, col, t);
	delete[] t;
	printArray(p, row, col);
	
	addStartRowArray(p, row, col);
	printArray(p, row, col);

	addRowArray(p, row, col, 3);
	printArray(p, row, col);
	
	delRowArray(p, row, col, 0);
	printArray(p, row, col);*/

	//deleteArray(p, row);
	//deleteArray(p);

	

	// *(*(p + i) + j) = p[i][j]

	//int a = 5;
	//int* p1 = &a;
	//int** p2 = &p1;

	//cout << *p1 << endl; // значенн€ a
	//cout << p1 << endl; // адреса p1
	//cout << p2 << endl; // адреса p2
	//cout << *p2 << endl; // адреса p1
	//cout << **p2 << endl; // значенн€ a


	// 22/06/2026 -- Lesson 11

	/*int a, b, op;
	int(*operation[])(int, int) = { add, subtract, multiply, divide };
	cin >> a >> b;
	cout << "0 -- +\n1 -- -\n2 -- *\n3 -- /" << endl;
	cin >> op;
	cout << operation[op](a, b) << endl;*/

	/*float calc[3];
	float(*count)();
	
	cout << "0 -- +\n1 -- -\n2 -- *\n3 -- /";
	cin >> calc[0] >> calc[1] >> calc[2];

	count = calculate(calc);
	cout << count() << endl;*/


	/*int bullets[] = { 50, 50, 50 };
	void(*shoot)(int*);
	while (true)
	{
		if (_kbhit())
		{
			int c = _getch();
			switch (c)
			{
			case ' ':
				shoot = weapon(bullets);
				shoot(bullets);
				break;
			case 'a':
				bow(bullets);
				break;
			default:
				break;
			}
		}
	}*/

	/*int len = 600;
	void(*director)() = prorab(len);
	director();*/

	/*int size = 10;
	int* p = new int[size];
	setArray(p, size);
	printArray(p);
	printArray(p, size);
	bubbleSort(p, size);
	printArray(p, size);
	bubbleSort(p, size, dec);
	printArray(p, size);*/

	/*forEach(p, size, mTen);
	printArray(p);*/

	/*void(*message)() = hello;
	message();

	message = goodbye;

	message();

	void(*func)(int, char) = starLine;*/

	/*void(*message[])() = { hello, goodbye };
	for (size_t i = 0; i < 2; i++)
	{
		message[i]();
	}*/


	// 19/06/2026 -- Lesson 10

	/*int m = 10, n = 4;
	int* a = new int[m];
	setArray(a, m);
	printArray(a, m);
	int* b = new int[n];
	setArray(b, n);
	printArray(b, n);

	int size;
	int* c = nullptr;

	setNewArray(a, m, b, n, c, size);
	printArray(c, size);
	setNewArray(a, m, b, n, c, size, 3);
	printArray(c, size);*/



	//int a = 5;
	//const int* pa = &a;
	//*pa = 99;
	//int b = 77;
	//pa = &b;

	//int* const pa = &a;
	//*pa = 555;
	//pa = &b;

	//const int* const pa = &a;

	//const int& rb = b;


	/*int a = 5;      int b = 8;
	int* pa = &a;   int& rb = b;
	*pa = 99;       rb = 88;

	pa = &b;        rb = a;

	inc(a);*/

	/*const int M = 10, N = 3;
	int* A = new int[M];
	int* B = new int[N];
	setArray(A, M);
	setArray(B, N);

	SetColor(Blue, Black);
	cout << "A: ";
	printArray(A, M);
	SetColor(Red, Black);
	cout << "B: ";
	printArray(B, N);

	int* p = findSubArray(A, M, B, N);
	SetColor(Green, Black);
	cout << *p << endl;
	cout << p << endl;
	SetColor(White, Black);*/

	/*const int size = 5;
	int arr[size];
	setArray(arr, size);
	printArray(arr, size);

	int* p = sumProdArray(arr, size);
	cout << p[0] << endl;
	cout << p[1] << endl;*/

	/*int a = 8;
	int* pa = &a;
	cout << sizeof(pa) << endl;*/

	/*int M_1, N_1;
	
	cout << "M: ";
	cin >> M_1;
	int* A = new int[M_1];
	setArray(A, M_1);
	SetColor(Blue, Black);
	cout << "A: ";
	printArray(A, M_1);
	SetColor(White, Black);
	
	cout << "N: ";
	cin >> N_1;
	int* B = new int[N_1];
	setArray(B, N_1);
	SetColor(Red, Black);
	cout << "B: ";
	printArray(B, N_1);

	int* C = nullptr;
	int C_1 = 0;

	for (size_t i = 0; i < M_1; i++)
	{
		if (findValue(B, N_1, A[i]) == -1 && findValue(C, C_1, A[i]) == -1)
		{
			addValueArray(C, C_1, A[i]);
			findArray(B, N_1, A[i]);
		}
	}
	SetColor(Green, Black);
	printArray(C, C_1);
	SetColor(White, Black);*/


	// 15/06/2026 -- Lesson 9
	
	//int size;
	//cout << "Size: ";
	//cin >> size;
	//int* p = new int[size];
	//setArray(p, size);
	//printArray(p, size);
	//
	//int adding;
	//cout << "Adding: ";
	//cin >> adding;
	////p = extendArray(p, size, adding);
	////size += adding;
	//p = addValueArray(p, &size, adding, 999);
	//printArray(p, size);

	//p = new int;
	
	
	//setArray(p, size);
	//printArray(p, size);



	//const int size = 5;
	//int arr[] = { 1, 2, 3, 4, 5 };
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << *(arr + i) << " ";
	//}
	//cout << endl;

	//for (int* i = arr; i != arr+5; i++)
	//{
	//	cout << *i << " ";
	//}
	//cout << endl;

	//for (int i = size-1; i >= 0; i--)
	//{
	//	cout << *(arr + i) << " ";
	//}
	//cout << endl;

	//int a = 5;
	//cout << a << endl;
	//cout << &a << endl;
	//cout << typeid(a).name() << endl;
	//cout << sizeof(a) << endl;

	//int* p = &a;
	//cout << p << endl;
	//cout << *p << endl;
	//*p = 999;
	//cout << a << endl;

	//int *p1, p2;
	//int* p2 = 0x00000025AD45;
	//*p2 = 5465654;

	// + - ++ -- 

	//p += 1; // p + n = p + n * type;
	//cout << p << endl;
	//cout << *p << endl;

	//int arr[4] = { 1, 2, 32, 4 };
	//for (size_t i = 0; i < 4; i++)
	//{
	//	cout << *(arr + i) << endl; // *(arr + 1) = arr[i] -- ≥ндексатор
	//}

	//cout << *(arr + 0) << endl;
	//cout << *(arr + 1) << endl;
	//cout << *(arr + 2) << endl;
	//cout << *(arr + 3) << endl;

	// > < >= <= == != 

	//int b = -5;
	//int* pb = &b;
	//cout << pb << endl;
	//cout << (p == pb) << endl;

	//int c = 0;
	//int* pc = nullptr; // = 0;
	//cout << c << endl;
	//cout << pc << endl;
	//if (pc == &b)
	//{
	//	pc = &c;
	//}


	// 08/06/2026 -- Lesson 8

	/*const int size = 10;
	int arr[size];
	setArray(arr, size, -7, 7);
	printArray(arr, size);

	int frstInd = findValue(arr, size, 0, 1);
	int lastInd = findValue(arr, size, 0, 2);
	ascBubbleSort(arr, size, frstInd, lastInd);
	printArray(arr, size);*/

	//rec();

	/*const int size = 10;
	double arr[size];
	setArray(arr, size);
	printArray(arr, size);

	findValue(arr, size, 3.);
	ascBubbleSort(arr, size);

	avg3(1, 2, 3);
	printArray(arr, size);
	cout << maxValueArray(arr, size) << endl;
	cout << countValueArray(arr, size, maxValueArray(arr, size)) << endl;
	cout << sumValueArray(arr, size) << endl;*/

	//cout << Sum(3, 5.5) << endl;
	//cout << Sum(3.5, 5) << endl;
	//cout << Sum(3.5, 5.5) << endl;
	//cout << Sum(3, 'a', 2.5) << endl;

	//auto a = 10 + 3.5;
	//
	//int c = 9;

	//a = 3.5;

	//decltype(a + c) b;

	//auto m = 'c';


	// 05/06/2026 -- Lesson 7

	////cout << starLine << cout;
	//starLine();
	//starLine(30);
	//starLine(20, '#');

	///*int a, b, c;
	//cout << "a b c" << endl;
	//cin >> a >> b >> c;
	//cout << avgNum(a, b, c) << endl;*/

	//const int size = 10;
	//int arr[size], minValue = 20, maxValue = 50;
	//setArray(arr, size); // , minValue, maxValue
	//printArray(arr, size);
	///*ascBubbleSort(arr, size);
	//printArray(arr, size);*/
	//int value;
	//cin >> value;
	//cout << findValue(arr, size, value) << endl;


	// 01/06/2026 -- Lesson 6

	//const int n = 3;
	//int a[n][n];
	//int min, max;
	//cin >> min >> max;

	//int combination = max - min + 1;
	//if (n*n <= combination)
	//{
	//	for (size_t i = 0; i < n; i++)
	//	{
	//		for (size_t j = 0; j < n; j++)
	//		{
	//			bool flag = true; // is unique
	//			while (flag)
	//			{
	//				int num = rand() % (max - min + 1) + min;
	//				for (size_t row = 0; row < n; row++)
	//				{
	//					for (size_t col = 0; col < n; col++)
	//					{
	//						if (a[row][col] == num)
	//						{
	//							flag = false; // found
	//						}
	//					}
	//				}
	//				if (flag)
	//				{
	//					a[i][j] = num;
	//					break;
	//				}
	//				flag = true;
	//			}
	//		}
	//	}
	//	for (size_t i = 0; i < n; i++)
	//	{
	//		for (size_t j = 0; j < n; j++)
	//		{
	//			cout << setw(3) << a[i][j] << " ";
	//		}
	//		cout << endl;
	//	}
	//}
	//else
	//{
	//	cout << "Not enough of unique numbers." << endl;
	//}

	//const int row = 4, col = 4;
	//int a[row][col];
	//int min = 0, max = 9;
	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		a[i][j] = rand() % (max - min + 1) + min;
	//	}
	//}

	//int maxValue = a[0][0], minValue = a[0][0], amount = 0, sum = 0;
	//int iMin = 0, jMin = 0, iMax = 0, jMax = 0;
	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		/*if (a[i][j] > maxValue)
	//		{
	//			maxValue = a[i][j];
	//			iMax = i;
	//			jMax = j;
	//		}*/
	//		if (a[i][j] >= maxValue)
	//		{
	//			maxValue = a[i][j];
	//			iMax = i;
	//			jMax = j;
	//		}
	//		else if (a[i][j] < minValue)
	//		{
	//			minValue = a[i][j];
	//			iMin = i;
	//			jMin = j;
	//		}
	//	}
	//}

	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		(i==iMax&&j==jMax || i == iMin && j == jMin) ? SetColor(Red, White) : SetColor(Black, White);
	//		cout << a[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//SetColor(Black, White);

	//for (size_t i = iMin; i <= iMax; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		if (i == iMin && j > jMin || i == iMax && j < jMax || i > iMin && i < iMax)
	//		{
	//			amount++;
	//			sum += a[i][j];
	//		}
	//	}
	//}
	//cout << amount << " " << sum << endl;

	/*int i = 0, j = 0;
	while (i < row)
	{
		if (j == col)
		{
			i++;
			cout << endl;
			j = 0;
		}
		else
		{
			cout << a[i][j++] << " ";
		}
		
	}*/

	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{	
	//		(a[i][j] == maxValue) ? SetColor(Red, White) : (a[i][j] == minValue) ? SetColor(Green, White) : SetColor(Black, White);
	//		/*if (a[i][j] == maxValue)
	//		{
	//			SetColor(Red, White);
	//		}
	//		else if (a[i][j] == minValue)
	//		{
	//			SetColor(Green, White);
	//		}*/
	//		cout << a[i][j] << " ";
	//		// SetColor(Black, White);
	//	}
	//	cout << endl;
	//}


	// 29/05/2026 -- Lesson 5

	//const int size = 12;
	//int a[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	///*int min = 1, max = 5;
	//for (size_t i = 0; i < size; i++) {
	//	a[i] = rand() % (max - min + 1) + min;
	//}*/
	//for (size_t i = 0; i < size; i++) {
	//	cout << a[i] << " ";
	//}
	//cout << endl;

	//int c[size * 2 + 1];
	//int ind = 0, x=0;
	//for (size_t i = 1; i <= (size / 2) + 1; i++)
	//{
	//	for (size_t j = 0; j <= 3; j++)
	//	{
	//		c[ind + j] = a[i-1+x];
	//	}
	//	c[ind + 3] = a[i+x];
	//	ind += 4;
	//	x++;
	//}
	//for (size_t i = 0; i < ind-1; i++) {
	//	cout << c[i] << " ";
	//}
	//cout << endl;

	/*int b = a[0];
	a[0] = a[size - 1];
	a[size - 1] = b;
	for (size_t i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << endl;*/


	/*int b[size];
	int ind = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0)
		{
			b[ind++] = a[i];
		}
	}
	for (size_t i = 0; i < ind; i++) {
		cout << b[i] << " ";
	}
	cout << endl;*/

	/*int amount = 0;
	for (size_t i = 0; i < size; i++) {
		if (a[i] % 2 == 0) { amount++; }
	}
	int b[size];
	int ind = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0) {
			b[ind] = a[i];
			ind++;
		}
	}
	for (size_t i = 0; i < amount; i++) {
		cout << b[i] << " ";
	}
	cout << endl;*/

	/*int max_n = a[0], index = 0;
	for (size_t i = 1; i < size; i++)
	{
		if (a[i] >= max_n) {
			max_n = a[i];
			index = i;
		}
	}
	cout << "The max value is " << max_n << endl;
	cout << "It's index is " << index << endl;*/


	/*int n;
	cout << "Enter the number (1-5): ";
	cin >> n;
	int amount = 0;
	for (size_t i = 0; i < size; i++) {
		if (a[i] == n) { amount++; }
	}
	cout << "There are " << amount << " of them." << endl;*/


	//const int size = 5;
	//int a[size]; // = {1, 2, 3, 4, 5};

	//int amount = 0;
	//int min = 0, max = 9;
	////cin >> a[0] >> a[1] >> a[2] >> a[3];
	//for (size_t i = 0; i < size; i++) {
	//	a[i] = rand() % (max - min + 1) + min;
	//	//cin >> a[i];
	//}
	//for (size_t i = 0; i < size; i++) {
	//	cout << a[i] << " ";
	//}
	//cout << a << endl;
	/*for (size_t i = 0; i < size; i++) {
		if (a[i] % 2 == 0) { amount++; }
	}
	cout << amount << endl;*/

	/*int a, b, c, d, num, amount = 0;
	cin >> a >> b >> c >> d;

	for (size_t i = 0; i < 4; i++)
	{
		switch (i)
		{
		case 0: num = a; break;
		case 1: num = b; break;
		case 2: num = c; break;
		case 3: num = d; break;
		}
		if (num % 2 == 0) { amount++; }
	}

	cout << amount;*/


	// 25/05/2026 -- Lesson 4

	/*int fives = 0, mark, n1 = 0, n2 = 0, n3 = 0;
	//srand(time(0));
	for (size_t i = 0; i < 18; i++)
	{
		cout << "Student " << setw(2) << i+1 << " | ";
		int n = 0;
		for (size_t i = 0; i < 3; i++)
		{
			mark = rand() % 5 + 1;
			if (mark == 5) { fives++; }
			else if (mark == 3) { n++; }
			else if (mark == 2) {
				switch (i)
				{
				case 0: n1++; break;
				case 1: n2++; break;
				case 2: n3++; break;
				default:
					break;
				}
			}
			cout << mark << " ";
		}
		cout << " |  " << n << endl;
	}
	cout << "------" << endl;
	cout << n1 << " " << n2 << " " << n3 << " - total of twos" << endl;
	cout << "Total of fives: " << fives << endl;*/

	/*int num;
	cout << "Enter the number: ";
	cin >> num;

	int sum = 0, amount = 0, product = 1, sum2 = 0, sum3 = 0, first = 0, last = num;
	while (num != 0) {
		sum += num % 10;
		sum2 += pow(num % 10, 2);
		sum3 += pow(num % 10, 3);
		product *= num % 10;
		if (num < 10) {
			first = num;
			(last > 9) ? last %= 10 : last = 0;
		}
		num /= 10;
		amount++;
	}
	cout << "1. Sum of its digits: " << sum << endl;
	cout << "2. Amount of its digits: " << amount << endl;
	cout << "3. Product of its digits: " << product << endl;
	cout << "4. Mean of its digits: " << float(sum) / amount << endl;
	cout << "5. Sum of squares of its digits: " << sum2 << endl;
	cout << "6. Sum of cubes of its digits: " << sum3 << endl;
	cout << "7. First digit: " << first << endl;
	cout << "8. Sum of the first and the last digit: " << first+last << endl;*/


	/*int n = 0, sum = 0, i = 0;
	do {
		cout << "Number: ";
		cin >> n;
		sum += n;
		if (i == 9) {
			break;
		}
		else {
			i++;
		}
	} while (n != 0);
	cout << "Sum: " << sum << endl;*/

	//int n=0, sum=0;
	//do {
	//	cout << "Number: ";
	//	cin >> n;
	//	sum += n;
	//} while (n != 0);
	///*cout << "Number: ";
	//cin >> n;
	//sum += n;
	//while (n != 0) {
	//	cout << "Number: ";
	//	cin >> n;
	//	sum += n;
	//}*/
	//cout << "Sum: " << sum << endl;


	// 22/05/2026 -- Lesson 3

	/*int start_day = 3, number_of_days;
	for (size_t month = 1; month <= 12; month++)
	{
		switch (month) {
		case 1: number_of_days = 31; break;
		case 2: number_of_days = 28; break;
		case 3: number_of_days = 31; break;
		case 4: number_of_days = 30; break;
		case 5: number_of_days = 31; break;
		case 6: number_of_days = 30; break;
		case 7: number_of_days = 31; break;
		case 8: number_of_days = 31; break;
		case 9: number_of_days = 30; break;
		case 10: number_of_days = 31; break;
		case 11: number_of_days = 30; break;
		case 12: number_of_days = 31; break;
		}
		cout << setw(3) << month;
		SetColor(Red, White);
		cout << setw(25) << "2026 " << endl;
		SetColor(White, Black);
		cout << " Mo  Tu  We  Th  Fr";
		SetColor(White, Red);
		cout << "  Sa  Su ";
		SetColor(Black, White);
		cout << endl;
		for (size_t i = 0; i < start_day; i++) { cout << "    "; }
		for (size_t i = 1; i <= number_of_days; i++)
		{
			if ((i + start_day) % 7 == 6 || (i + start_day) % 7 == 0) {
				SetColor(Red, White);
			}
			cout << setw(3) << i << " ";
			SetColor(Black, White);
			if ((i + start_day) % 7 == 0 && i != number_of_days) {
				cout << endl;
			}
		}
		start_day = (number_of_days + start_day) % 7;
		cout << endl;
		cout << endl;
	}*/

	//int start_day = 4;
	//string month = "  May";
	//cout << month;
	//SetColor(Red, White);
	//cout << setw(28-month.length()) << "2026 " << endl;
	//SetColor(White, Black);
	//cout << " Mo  Tu  We  Th  Fr";
	//SetColor(White, Red);
	//cout << "  Sa  Su " << endl;
	//SetColor(Black, White);
	//for (size_t i = 0; i < start_day; i++)
	//{
	//	cout << "    ";
	//}
	//for (size_t i = 1; i <= 31; i++)
	//{
	//	if ((i + start_day) % 7 == 6 || (i + start_day) % 7 == 0) {
	//		SetColor(Red, White);
	//	}
	//	cout << setw(3) << i << " ";
	//	SetColor(Black, White);
	//	if ((i + start_day) % 7 == 0){
	//		cout << endl;
	//	}
	//}
	/*for (size_t i = 1; i <= 31; i++)
	{
		if ((i + start_day) % 7 == 6 || (i + start_day) % 7 == 0) {
			SetColor(Red, White);
		}
		else {
			SetColor(Black, White);
		}
		if ((i + start_day) % 7 == 0) {
			cout << setw(3) << i << endl;
		}
		else {
			cout << setw(3) << i << " ";
		}
	}
	SetColor(Black, White);
	cout << endl;*/


	/*double A, A_N;
	cout << "Enter A: ";
	cin >> A;
	int N;
	cout << "Enter N (N>0): ";
	cin >> N;

	A_N = A;
	for (size_t i = 1; i <= N; i++)
	{
		cout << "A^" << i << " = " << A_N << endl;
		A_N *= A;
	}*/
	
	//cout << "December        ";
	//SetColor(Red, White);
	//cout << "2025" << endl;
	//SetColor(White, Black);
	//cout << "Mo Tu We Th Fr";
	//SetColor(White, Red);
	//cout << " Sa Su" << endl;
	//SetColor(Black, White);
	//for (size_t i = 1; i <= 31; i++)
	//{
	//	/*if (i < 10) {*/
	//		if (i % 7 == 6 || i % 7 == 0) {
	//			SetColor(Red, White);
	//		}
	//		else {
	//			SetColor(Black, White);
	//		}
	//		if (i % 7 == 0) {
	//			cout << setw(2) << i << endl;
	//		}
	//		else {
	//			cout << setw(2) << i << " ";
	//		}
	//	/*}*/
	//	/*else {
	//		if (i % 7 == 6 || i % 7 == 0) {
	//			SetColor(Red, White);
	//		}
	//		else {
	//			SetColor(Black, White);
	//		}
	//		if (i % 7 == 0) {
	//			cout << i << endl;
	//		}
	//		else {
	//			cout << i << " ";
	//		}
	//	}*/
	//}

	//for (size_t i = 1; i <= 31; i++)
	//{
	//	if (i < 10) {(i % 7 == 0) ? cout << " " << i << endl : cout << " " << i << " "; }
	//	else { (i % 7 == 0) ? cout << i << endl : cout << i << " "; }
	//}


	/*float price;
	cout << "Enter the price for 1 kg: ";
	cin >> price;

	for (size_t i = 1; i <= 10; i++)
	{
		cout << "Price for " << i/10. << " kg is " << (i / 10.) * price << endl;
	}*/
	/*for (float i = 0.1; i <= 1.; i+=0.1)
	{
		cout << "Price for " << i << " kg is " << i * price << endl;
	}*/

	/*typedef unsigned char UC;
	UC t;*/

	/*for (size_t i = 1; i <= 10; i++) {
		cout << i << endl;
	}

	int i = 1;
	while (i <= 10)
	{
		cout << i << endl;
		i++;
	}

	do {

	} while ();*/


	// (condition) ? oper1 : oper2; -- тернарний оператор

	/*int a = 5, b = 4, c = 3, max;
	if (a > b) {
		max = a;
	}
	else {
		max = b;
	}

	(a > b) ? max = a : max = b;

	max = (a > b) ? a : b;
	max = (a > b && a > c) ? a : (b > c) ? b : c;*/


	// 18/05/2026 -- Lesson 2
	
	/*char fg, bg;
	cout << "Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray,"
		"LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White" << endl;
	cout << "Choose font and background colour: ";
	cin >> fg >> bg;

	SetColor((Color int)fg, (Color int)bg);
	cout << "Enjoy!" << endl;*/


	/*SetColor(LightRed, Blue);
	cout << "lorem iplum dolor" << endl;
	SetColor(White, Blue);*/


	/*switch (Colour)
	{
	case Black:
		break;
	case Red:
		break;
	case Green:
		break;
	case Blue:
		break;
	default:
		break;
	}

	Colour colour = Colour::Black;*/


	/*if (a > b)
	{
		if (a > c)
		{
			cout << "a is the biggest" << endl;
		}
		else
		{
			cout << "c is the biggest" << endl;
		}
	}
	else
	{
		if (b > c)
		{
			cout << "b is the biggest" << endl;
		}
		else
		{
			cout << "c is the biggest" << endl;
		}
	}*/

	/*int a, b, c;
	cin >> a >> b >> c;

	if (a > b && a > c)
	{
		cout << a << endl;
	}
	else if (b > c)
	{
		cout << b << endl;
	}
	else
	{
		cout << c << endl;
	}*/

	/*float a, b;
	char op;
	cin >> a >> op >> b;

	switch (op)
	{
	case '+': 
		cout << a + b << endl;
		break;
	case '-': cout << a - b << endl; break;
	case '*': cout << a * b << endl; break;
	case '/': cout << a / b << endl; break;
	default:
		cout << "Error. Use correct symbol (+, -, *, /)" << endl;
		break;
	}*/

	/*int month;
	cin >> month;

	switch (month)
	{
	case 12: case 1: case 2: cout << "Winter"; break;
	case 3: case 4: case 5: cout << "Spring"; break;
	case 6: case 7: case 8: cout << "Summer"; break;
	case 9: case 10: case 11: cout << "Autumn"; break;
	default:
		cout << "No such month!" << endl;
		break;
	}*/

	/*if (op == '+')
	{
		cout << a + b << endl;
	}
	else if (op == '-')
	{
		cout << a - b << endl;
	}
	else if (op == '*')
	{
		cout << a * b << endl;
	}
	else if (op == '/')
	{
		cout << a / b << endl;
	}
	else
	{
		cout << "Error. Use correct symbol (+, -, *, /)" << endl;
	}*/


	/*if (a % 2 == 0)
	{
		cout << "a is even" << endl;
	}
	else
	{
		cout << "a is odd" << endl;
	}*/
	
	// 0 - 99
	/*int n, n1, n2, cop;
	cout << "Enter the amount of coins (0 - 99): ";
	cin >> n;

	switch (n)
	{
	case 10: cout << "дес€ть "; break;
	case 11: cout << "одинадц€ть "; break;
	case 12: cout << "дванадц€ть "; break;
	case 13: cout << "тринадц€ть "; break;
	case 14: cout << "чотирнадц€ть "; break;
	case 15: cout << "п'€тнадц€ть "; break;
	case 16: cout << "ш≥стнадц€ть "; break;
	case 17: cout << "с≥мнадц€ть "; break;
	case 18: cout << "в≥с≥мнадц€ть "; break;
	case 19: cout << "дев'€тнадц€ть "; break;
	}

	n1 = n / 10;
	n2 = n % 10;
	if (n2 == 1 && n1 != 1)
	{
		cop = 1;
	}
	else if (n2 >= 5 || n2 == 0 || n1 == 1)
	{
		cop = 3;
	}
	else
	{
		cop = 2;
	}

	switch (n1)
	{
	case 2: cout << "двадц€ть "; break;
	case 3: cout << "тридц€ть "; break;
	case 4: cout << "сорок "; break;
	case 5: cout << "п'€тдес€т "; break;
	case 6: cout << "ш≥стдес€т "; break;
	case 7: cout << "с≥мдес€т "; break;
	case 8: cout << "в≥с≥мдес€т "; break;
	case 9: cout << "дев'€носто "; break;
	}
	if (n1 == 1) { n2 = 0; }
	switch (n2)
	{
	case 0: break;
	case 1: cout << "одна "; break;
	case 2: cout << "дв≥ "; break;
	case 3: cout << "три "; break;
	case 4: cout << "чотири "; break;
	case 5: cout << "п'€ть "; break;
	case 6: cout << "ш≥сть "; break;
	case 7: cout << "с≥м "; break;
	case 8: cout << "в≥с≥м "; break;
	case 9: cout << "дев'€ть "; break;
	}
	switch(cop)
	{
	case 1:
		cout << "коп≥йка." << endl;
		break;
	case 2:
		cout << "коп≥йки." << endl;
		break;
	case 3:
		cout << "коп≥йок." << endl;
		break;
	default:
		cout << "0-99 only." << endl;
		break;
	}*/
	
	


	// 15/05/2026 -- Lesson 1
	
	//cout << "Hello \"World!\"\n" << endl;
	//cout << "\t\tMy name is Reggie" << endl;
	//cout << 125 << endl;
	//cout << 125.354 << endl;
	//cout << true << endl;


	// type name;

	// bool - 1b

	// char - 1b

	// short - 2b;
	// int   - 4b
	// long  - 4b
	// long long - 8b

	// float  - 4b (7 digits)
	// double - 8b (15 digits)
	// long double - 16b (19 digits)

	//const int a = 5;
	//cout << a << endl;

	//int x = 5.99;
	//cout << x << endl;

	//char t = 'a';
	//cout << (char)(t + 3.5) << endl;

	//cout << 5 / 3 << endl;


	//unsigned int b = 300000000;
	//cout << b << endl;

	// _

	// - + ++ --
	// + - * / % += -= *= /= %=
	// !
	// < > <= >= == != && ||
	// () [] {} :: ~ ?: -> . ,

	//int a = 5, b = 4, c;
	//c = a++ * (--b + a-- / ++b);
	//cout << a << endl;
	//cout << b << endl;
	//cout << c << endl;

	//cout << 10 % 5 << endl;

	//a = a + b;
	//a += b;

	//cout << (int)(15.2 / 4) << endl;

	//c = !a;
	//cout << c << endl;

	//int a, b;
	//cin >> a;
	//cin >> b;
	////cout << (float)(a + b) / 2 << endl;
	//cout << (a + b) / 2. << endl;


	//int x, y;
	//cin >> x;
	//y = (3 * pow(x, 6)) - (6 * pow(x, 2)) - 7;
	//cout << "y = " << y << endl;


	//int x, a, b, c, sum, prod;
	//cin >> x;
	//a = x % 10;
	//b = x / 10 % 10;
	//c = x / 100;
	//sum = a + b + c;
	//prod = a * b * c;
	//cout << "sum = " << sum << endl;
	//cout << "prod = " << prod << endl;

	//printf("Hello %d World!\n", 5);

	return 0;
}

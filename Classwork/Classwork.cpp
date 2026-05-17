#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	cout.setf(ios::boolalpha);


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

	printf("Hello %d World!\n", 5);

	return 0;
}

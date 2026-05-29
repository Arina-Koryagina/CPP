#include<iostream>
#include<Windows.h>
#include<iomanip>

using namespace std;

//enum Color
//{
//	Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5, Brown = 6, LightGray = 7, DarkGray = 8,
//	LightBlue = 9, LightGreen = 10, LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15
//};
//
//void SetColor(int text, int background)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)((background << 4) | text));
//}

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);*/
	/*cout.setf(ios::boolalpha);*/
	/*SetColor(Black, White);
	system("cls");*/

	// 25/05/2026 -- Lesson 4

	int fives = 0, mark, n1 = 0, n2 = 0, n3 = 0;
	srand(time(0));
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
	cout << "Total of fives: " << fives << endl;

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

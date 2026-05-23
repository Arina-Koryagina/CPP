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

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	SetColor(Black, White);
	system("cls");

	int start_day = 3, number_of_days;
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
	}

	return 0;
}
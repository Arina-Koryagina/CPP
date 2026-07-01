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

int mystrcmp(const char* str1, const char* str2)
{
	int len1 = strlen(str1);
	for (int i = 0; i <= len1; i++)
	{
		if (str1[i] != str2[i])
		{
			if (str1[i] > str2[i])
			{
				return 1;
			}
			else
			{
				return -1;
			}
		}
	}

	return 0;
}

int StringToNumber(char* str)
{
	int len = strlen(str);
	int num = 0;
	int i = 0;
	bool neg = false;
	while (isspace(str[i]) != 0) { i++; }
	if (str[i] == '-')
	{
		neg = true;
		i++;
	}
	while (isdigit(str[i]) != 0)
	{
		num = num * 10 + (str[i] - 48); // 48 - '0' in ASCII
		i++;
	}
	
	if (neg) { return -num; }
	return num;
}

int getDigits(int num)
{
	int digits = 1;
	num = abs(num);
	while (num > 9)
	{
		num /= 10;
		digits++;
	}

	return digits;
}

char* NumberToString(int number)
{
	int len = getDigits(number);
	bool neg = false;
	if (number < 0)
	{
		neg = true;
		len++;
		number = -number;
	}
	char* str = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		str[len - i - 1] = number % 10 + 48;
		number /= 10;
	}
	if (neg) { str[0] = '-'; }
	str[len] = '\0';

	return str;
}

char* Uppercase(char* str1)
{
	int len = strlen(str1);
	char* str2 = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		if (isupper(str1[i]) == 0 && isalpha(str1[i]) != 0)
		{
			str2[i] = str1[i] - 32; // 'a' (97) - 'A' (65) = 32
		}
		else
		{
			str2[i] = str1[i];
		}
	}
	str2[len] = '\0';

	return str2;
}

char* Lowercase(char* str1)
{
	int len = strlen(str1);
	char* str2 = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		if (islower(str1[i]) == 0 && isalpha(str1[i]) != 0)
		{
			str2[i] = str1[i] + 32;
		}
		else
		{
			str2[i] = str1[i];
		}
	}
	str2[len] = '\0';

	return str2;
}

char* mystrrev(char* str)
{
	int len = strlen(str);
	for (int i = 0; i < len / 2; i++)
	{
		swap(str[i], str[len - i - 1]);
	}
	return str;
}
#include<iostream>
#include<Windows.h>
#include<iomanip>
#include<fstream>

#include"Func.h"

using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	SetColor(White, Black);
	system("cls");
	srand(time(0));

	//  I
	cout << "\tI" << endl;
	// Дано два текстові файли. З'ясувати, чи збігаються їхні рядки. Якщо ні, то вивести рядок, що не збігається, з кожного файлу.

	char* buffer = new char[256];
	char** arr_1 = nullptr;
	int size_1 = 0;
	ifstream in("task_1\\text1.txt");
	if (in.is_open())
	{
		while (in.getline(buffer, 256))
		{
			addValueArray(arr_1, size_1, buffer);
			buffer = new char[256];
		}
	}
	else
	{
		SetColor(LightRed, Black);
		cout << "File not found!" << endl;
		SetColor(White, Black);
	}
	in.close();

	char** arr_2 = nullptr;
	int size_2 = 0;
	in.open("task_1\\text2.txt");
	if (in.is_open())
	{
		while (in.getline(buffer, 256))
		{
			addValueArray(arr_2, size_2, buffer);
			buffer = new char[256];
		}
	}
	else
	{
		SetColor(LightRed, Black);
		cout << "File not found!" << endl;
		SetColor(White, Black);
	}
	in.close();

	for (int i = 0; i < size_1; i++)
	{
		if (!equalString(arr_1[i], arr_2[i]))
		{
			cout << "First text: " << arr_1[i] << endl;
			cout << "Second text: " << arr_2[i] << endl;
		}
	}


	//  II
	cout << "\n\tII" << endl;
	// Дано текстовий файл. Необхідно створити новий файл і записати в нього таку статистику за вихідним файлом:
	// - Кількість символів;
	// - Кількість рядків;
	// - Кількість голосних букв;
	// - Кількість приголосних букв;
	// - Кількість цифр.

	char** text = nullptr;
	int size = 0;
	in.open("task_2\\The Little Prince.txt");
	if (in.is_open())
	{
		while (in.getline(buffer, 256))
		{
			addValueArray(text, size, buffer);
			buffer = new char[256];
		}
	}
	else
	{
		SetColor(LightRed, Black);
		cout << "File not found!" << endl;
		SetColor(White, Black);
	}
	in.close();

	int symb = 0, lines = 0, vowels = 0, cons = 0, nums = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; text[i][j] != '\0'; j++)
		{
			symb++;
			if (isalpha(text[i][j]))
			{
				char c = tolower(text[i][j]);
				if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
				{
					vowels++;
				}
				else
				{
					cons++;
				}
			}
			else if (isdigit(text[i][j]))
			{
				nums++;
			}
		}
		lines++;
	}

	ofstream out("task_2\\Stats of The Little Prince.txt");
	out << "Symbols: " << symb << endl;
	out << "Lines: " << lines << endl;
	out << "Vowels: " << vowels << endl;
	out << "Consonants: " << cons << endl;
	out << "Numbers: " << nums << endl;
	out.close();

	SetColor(LightGreen, Black);
	cout << "All done!";
	SetColor(White, Black);
	cout << " Check \"Stats of The Little Prince.txt\"" << endl;


	//  III
	cout << "\n\tIII" << endl;
	// Шифр Цезаря — один із найдавніших шифрів. Під час шифрування кожен символ замінюється іншим, віддаленим від нього в алфавіті на фіксоване число позицій.
	// Приклад
	// - Шифрування з використанням ключа : 3
	// - Оригінальний текст : Съешь же ещё этих мягких французских булок, да выпей чаю.
	// - Шифрований текст : Фэзыя йз зьи ахлш пвёнлш чугрщцкфнлш дцосн, жг еютзм ъгб.
	// - Дано текстовий файл. Зашифрувати його, використовуючи шифр Цезаря. Результат записати в інший файл.

	char** cipher = nullptr;
	int len = 0, key;
	in.open("task_3\\Caesar cipher.txt");
	if (in.is_open())
	{
		while (in.getline(buffer, 256))
		{
			addValueArray(cipher, len, buffer);
			buffer = new char[256];
		}
	}
	else
	{
		SetColor(LightRed, Black);
		cout << "File not found!" << endl;
		SetColor(White, Black);
	}
	in.close();

	cout << "Enter the cipher key: "; cin >> key; cin.ignore();

	char** encrypted = new char* [len];
	for (int i = 0; i < len; i++)
	{
		size = strlen(cipher[i]);
		encrypted[i] = new char[size + 1];
	}
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; cipher[i][j] != '\0'; j++)
		{
			if (isalpha(cipher[i][j]))
			{
				char c = cipher[i][j] + key;
				int zee;
				(islower(cipher[i][j])) ? zee = 'z' : zee = 'Z';
				if (c > zee)
				{
					c -= 26;
				}
				encrypted[i][j] = c;
			}
			else
			{
				encrypted[i][j] = cipher[i][j];
			}
		}
		encrypted[i][size] = '\0';
	}

	out.open("task_3\\Caesar cipher - Encrypted.txt");
	for (int i = 0; i < len; i++)
	{
		out << encrypted[i];
	}
	out.close();

	SetColor(LightGreen, Black);
	cout << "All done!";
	SetColor(White, Black);
	cout << " Check \"Caesar cipher - Encrypted.txt\"" << endl;


	return 0;
}
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

/*-----------------------*/
template<int ROWS, int COLS>
void fill(char(&field)[ROWS][COLS], int size, int pos[], char symbol = ' ')  // https://www.geeksforgeeks.org/cpp/pass-array-to-functions-in-cpp/
{
	for (size_t j = 0; j < size; j++)
	{
		for (size_t i = 0; i < size; i++)
		{
			field[j][i] = symbol;
		}
		pos[j] = j;
	}
}

template<int ROWS, int COLS>
void fill(char(&field)[ROWS][COLS], int x, int y, char symbol)
{
	field[y][x] = symbol;
}

template<int ROWS, int COLS>
void printField(char(&field)[ROWS][COLS], char grid[], int size, int pos[])
{
	cout << endl;
	for (size_t j = 0; j < size; j++)
	{
		if (j == 0)
		{
			SetColor(LightCyan, White);
			cout << "y";
			SetColor(Magenta, White);
			cout << "x ";
			for (size_t i = 0; i < size; i++)
			{
				cout << pos[i] << "   ";
			}
			SetColor(Black, White);
		}
		else if (j != size)
		{
			cout << "  ";
			for (size_t j = 0; j < size; j++)
			{
				for (size_t i = 0; i < 3; i++)
				{
					cout << grid[1];
				}
				cout << " ";
			}
		}
		cout << endl;
		SetColor(LightCyan, White);
		cout << pos[j] << "  ";
		SetColor(Black, White);
		for (size_t i = 0; i < size; i++)
		{
			if (field[j][i] == 'x')
			{
				SetColor(Blue, White);
			}
			else if (field[j][i] == 'o')
			{
				SetColor(Red, White);
			}
			cout << field[j][i] << " ";
			SetColor(Black, White);
			if (i+1 != size)
			{
				cout << grid[0] << " ";
			}
		}
		cout << endl;
	}
}

template<int ROWS, int COLS>
bool fieldCheck(char(&field)[ROWS][COLS], int size, int x, int y)
{
	if ((x >= 0 && x < size) && (y >= 0 && y < size))
	{
		if (field[y][x] == ' ')
		{
			return true;
		}
	}
	return false;
}

template<int ROWS, int COLS>
bool fieldCheck(char(&field)[ROWS][COLS], int size)
{
	int space = size * size;
	for (size_t j = 0; j < size; j++)
	{
		for (size_t i = 0; i < size; i++)
		{
			if (field[j][i] != ' ')
			{
				space--;
			}
		}
	}
	if (space == 0)
	{
		return true;
	}
	return false;
}

template<int ROWS, int COLS>
void playerTurn(char(&field)[ROWS][COLS], char grid[], int size, int coord[], int mod = 1)
{
	int pos[2];
	cout << "Enter the position (";
	SetColor(Magenta, White);
	cout << "x ";
	SetColor(LightCyan, White);
	cout << "y";
	SetColor(Black, White);
	cout << "): ";
	cin >> pos[0] >> pos[1];
	if (fieldCheck(field, size, pos[0], pos[1]))
	{
		if (mod == 1)
		{
			fill(field, pos[0], pos[1], 'x');
		}
		else
		{
			fill(field, pos[0], pos[1], 'o');
		}
		printField(field, grid, size, coord);
	}
	else 
	{
		cout << "Wrong position. Try again." << endl;
		playerTurn(field, grid, size, coord);
	}
}

template<int ROWS, int COLS>
void botTurn(char(&field)[ROWS][COLS], char grid[], int size, int coord[])
{
	int pos[2];
	pos[0] = rand() % size;
	pos[1] = rand() % size;
	if (fieldCheck(field, size, pos[0], pos[1]))
	{
		fill(field, pos[0], pos[1], 'o');
		printField(field, grid, size, coord);
	}
	else
	{
		botTurn(field, grid, size, coord);
	}
}

template<int ROWS, int COLS>
bool winCheck(char(&field)[ROWS][COLS], int size, char symbol)
{
	for (size_t j = 0; j < size; j++)
	{
		int count = 0;
		for (int i = 0; i < size; i++)
		{
			if (field[j][i] == symbol)
			{
				count++;
			}
		}
		if (count == size)
		{
			return true;
		}
	}

	for (size_t j = 0; j < size; j++)
	{
		int count = 0;
		for (int i = 0; i < size; i++)
		{
			if (field[i][j] == symbol)
			{
				count++;
			}
		}
		if (count == size)
		{
			return true;
		}
	}

	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (field[i][i] == symbol)
		{
			count++;
		}
	}
	if (count == size)
	{
		return true;
	}

	count = 0;
	for (int i = 0; i < size; i++)
	{
		if (field[i][size - i - 1] == symbol)
		{
			count++;
		}
	}
	if (count == size)
	{
		return true;
	}

	return false;
}

void printScore(int playerScore, int botScore)
{
	SetColor(Blue, White);
	cout << playerScore;
	SetColor(Black, White);
	cout << ":";
	SetColor(Red, White);
	cout << botScore << endl;
	SetColor(Black, White);
}
/*-----------------------*/

void setArray(int arr[], int size, int min = 0, int max = 20)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
}

void printArray(int arr[], int size, int start = 0)
{
	for (int i = start; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

void bubbleSort(int arr[], int size, bool reverse = false, int start = 0)
{
	if (reverse)
	{
		for (size_t j = start; j < size - 1; j++)
		{
			for (size_t i = start; i < size - 1 - (j - start); i++)
			{
				if (arr[i] < arr[i + 1])
				{
					swap(arr[i], arr[i + 1]);
				}
			}
		}
	}
	else
	{
		for (size_t j = start; j < size - 1; j++)
		{
			for (size_t i = start; i < size - 1 - (j - start); i++)
			{
				if (arr[i] > arr[i + 1])
				{
					swap(arr[i], arr[i + 1]);
				}
			}
		}
	}
}

void insertionSort(int arr[], int size, int start = 0)  // https://www.geeksforgeeks.org/dsa/insertion-sort-algorithm/
{
	for (int i = start + 1; i < size; i++)
	{
		int key = arr[i];
		int j = i - 1;

		while (j >= start && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = key;
	}
}

int findIndex(int arr[], int size, bool order = true) // order: T - first, F - last
{
	if (order)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] < 0)
			{
				return i;
			}
		}
	}
	else
	{
		for (int i = size - 1; i >= 0; i--)
		{
			if (arr[i] < 0)
			{
				return i;
			}
		}
	}

	return -1;
}

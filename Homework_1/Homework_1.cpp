#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	//  I
	cout << "\tI" << endl;
	// Користувач вводить із клавіатури час у секундах. 
	// Необхідно написати програму, яка переведе введені 
	// користувачем секунди в години, хвилини, секунди 
	// і виведе їх на екран.

	int s, m = 0, h = 0;
	cout << "Enter number of seconds: ";
	cin >> s;

	h = s / 3600;
	s %= 3600;
	m = s / 60;
	s %= 60;

	cout << "Time: " << h << "h " << m << "m " << s << "s" << endl;


	//  II
	cout << "\n\tII" << endl;
	// Написати програму, яка перетворює введене з клавіатури
	// дробове число в грошовий формат. Наприклад, число 12,5
	// має бути перетворено до вигляду 12 грн. 50 коп.

	double num;
	int hrn, cop;
	cout << "Enter the number: ";
	cin >> num;

	hrn = (int)num;
	cop = (num - hrn)*100;

	cout << "Value: " << hrn << "hrn " << cop << "cop" << endl;


	//  III
	cout << "\n\tIII" << endl;
	// Написати програму, що обчислює, з якою швидкістю бігун пробіг дистанцію.

	double time, speed;
	int meter, second, min, sec;
	cout << "Enter the distance (m): ";
	cin >> meter;
	cout << "Enter the time (min.sec): ";
	cin >> time;

	min = int(time);
	sec = (time - min) * 100;
	second = sec + min * 60;
	speed = (meter * 3600.) / (second * 1000);

	cout << "Time: " << min << " min " << sec << " sec = " << second << "s" << endl;
	cout << "Speed: " << speed << " (km per hour)" << endl;


	//  IV
	cout << "\n\tIV" << endl;
	// Написати програму, яка перетворює введену користувачем кількість днів
	// на кількість повних тижнів і днів, що залишилися. Наприклад, якщо
	// користувач ввів 17 днів, програма повинна вивести на екран 2 тижні і 3 дні.

	int days, weeks;
	cout << "Enter number of days: ";
	cin >> days;

	weeks = days / 7;
	days %= 7;

	cout << "That will be " << weeks << " weeks and " << days << " days" << endl;


	return 0;
}

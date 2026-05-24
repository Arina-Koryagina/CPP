#include<iostream>
#include<Windows.h>
#include <cmath>  // https://www.w3schools.com/cpp/cpp_ref_math.asp

using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	//  I
	cout << "\tI" << endl;
	// В восточном календаре принят 60-летний цикл, состоящий из 12-летних
	// подциклов, обозначаемых названиями цвта: зеленый, красный, желтый,
	// белый и черный. В каждом подцикле годы носят названия животных:
	// крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, курицы,
	// собаки и свиньи. По номеру года определить его название, если 1984 года - 
	// начало цикла: "год зеленой крысы".

	int year, cycle, syb_cycle;
	cout << "Enter the year: ";
	cin >> year;

	cycle = ((year - 1984) / 12) % 5;
	syb_cycle = (year - 1984) % 12;
	
	cout << "year of the ";
	switch (cycle) {
	case 0: cout << "green "; break;
	case 1: cout << "red "; break;
	case 2: cout << "yellow "; break;
	case 3: cout << "white "; break;
	case 4: cout << "black "; break;
	}
	switch (syb_cycle) {
	case 0: cout << "rat"; break;
	case 1: cout << "cow"; break;
	case 2: cout << "tiger"; break;
	case 3: cout << "hare"; break;
	case 4: cout << "dragon"; break;
	case 5: cout << "snake"; break;
	case 6: cout << "horse"; break;
	case 7: cout << "sheep"; break;
	case 8: cout << "monkey"; break;
	case 9: cout << "chicken"; break;
	case 10: cout << "dog"; break;
	case 11: cout << "pig"; break;
	}


	//  II
	cout << "\n\n\tII" << endl;
	// Користувач вводить дві дати (день, місяць, рік у вигляді цілих чисел).
	// Необхідно визначити і вивести кількість днів між цими двома датами.
	// Для розрахунків враховувати високосні роки, а також коректне число днів у
	// місяцях (березень — 31, вересень — 30, лютий невисокосного року — 28 і т.д.).

	int d1, m1, y1;
	int d2, m2, y2;
	cout << "Enter first date (dd mm yyyy): ";
	cin >> d1 >> m1 >> y1;
	cout << "Enter second date (dd mm yyyy): ";
	cin >> d2 >> m2 >> y2;

	int total1 = 0, total2 = 0, number_of_days;
	for (int y = 0; y < y1; y++)
	{
		if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
			total1 += 366;
		else
			total1 += 365;
	}
	for (int month = 1; month < m1; month++)
	{
		switch (month)
		{
		case 1: number_of_days = 31; break;
		case 2:
			if ((y1 % 400 == 0) || (y1 % 4 == 0 && y1 % 100 != 0))
				number_of_days = 29;
			else
				number_of_days = 28;
			break;
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
		total1 += number_of_days;
	}
	total1 += d1;

	for (int y = 0; y < y2; y++)
	{
		if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
			total2 += 366;
		else
			total2 += 365;
	}
	for (int month = 1; month < m2; month++)
	{
		switch (month)
		{
		case 1: number_of_days = 31; break;
		case 2:
			if ((y2 % 400 == 0) || (y2 % 4 == 0 && y2 % 100 != 0))
				number_of_days = 29;
			else
				number_of_days = 28;
			break;
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
		total2 += number_of_days;
	}
	total2 += d2;
	int days = abs(total2 - total1);

	cout << "Days between dates: " << days << endl;


	//  III
	cout << "\n\tIII" << endl;
	// Зарплата менеджера становить 200$ + відсоток від продажів (продажі до 500$ — 3%,
	// від 500 до 1000 — 5%, понад 1000 — 8%). Користувач вводить із клавіатури рівень
	// продажів для трьох менеджерів. Визначити їхню зарплату, визначити найкращого
	// менеджера, нарахувати йому премію 200$, вивести підсумки на екран.

	int fst, snd, trd;
	cout << "Enter the sales for the first, second, and third managers: ";
	cin >> fst >> snd >> trd;
	double fst_s, snd_s, trd_s, total;

	if (fst < 500) { fst_s = 200. + fst * 0.03; }
	else if (fst < 1000) { fst_s = 200. + fst * 0.05; }
	else { fst_s = 200. + fst * 0.08; }
	if (snd < 500) { snd_s = 200. + snd * 0.03; }
	else if (snd < 1000) { snd_s = 200. + snd * 0.05; }
	else { snd_s = 200. + snd * 0.08; }
	if (trd < 500) { trd_s = 200. + trd * 0.03; }
	else if (trd < 1000) { trd_s = 200. + trd * 0.05; }
	else { trd_s = 200. + trd * 0.08; }

	cout << "First manager's salary: " << fst_s << "$" << endl;
	cout << "Second manager's salary: " << snd_s << "$" << endl;
	cout << "Third manager's salary: " << trd_s << "$" << endl;

	if (fst > snd && fst > trd) {
		total = fst_s + 200;

		cout << "Best manager is the first. Their total: " << total << "$" << endl;
	}
	else if (snd > trd) {
		total = snd_s + 200;

		cout << "Best manager is the second. Their total: " << total << "$" << endl;
	}
	else if (trd > snd) {
		total = trd_s + 200;

		cout << "Best manager is the third. Their total: " << total << "$" << endl;
	}
	else {
		cout << "Everyone has an equal pay.";
	}


	return 0;
}

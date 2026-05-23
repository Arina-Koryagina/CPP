#include<iostream>
#include<Windows.h>

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

	//int day_1, month_1, year_1;
	//cout << "Enter the first date: ";
	//cin >> day_1 >> month_1 >> year_1;
	//int day_2, month_2, year_2;
	//cout << "Enter the second date: ";
	//cin >> day_2 >> month_2 >> year_2;
	//int days, months, years;

	//years = year_2 - year_1;
	//if (years < 0) { years = -years; }
	//

	//cout << "The amount of days between two dates: " << days << endl;


	//  III
	cout << "\n\tIII" << endl;
	// Зарплата менеджера становить 200$ + відсоток від продажів (продажі до 500$ — 3%,
	// від 500 до 1000 — 5%, понад 1000 — 8%). Користувач вводить із клавіатури рівень
	// продажів для трьох менеджерів. Визначити їхню зарплату, визначити найкращого
	// менеджера, нарахувати йому премію 200$, вивести підсумки на екран.

	int fst, snd, trd, best;
	cout << "Enter the sales for the first, second, and third managers: ";
	cin >> fst >> snd >> trd;
	float fst_s, snd_s, trd_s, total;
	//char best;

	if (fst < 500) { fst_s = 200 + fst * 0.03; }
	else if (fst < 1000) { fst_s = 200 + fst * 0.05; }
	else { fst_s = 200 + fst * 0.08; }
	if (snd < 500) { snd_s = 200 + snd * 0.03; }
	else if (snd < 1000) { snd_s = 200 + snd * 0.05; }
	else { snd_s = 200 + snd * 0.08; }
	if (trd < 500) { trd_s = 200 + trd * 0.03; }
	else if (trd < 1000) { trd_s = 200 + trd * 0.05; }
	else { trd_s = 200 + trd * 0.08; }
	if (fst > snd && fst > trd) {
		//best = "first";
		best = 1;
		total = fst_s + 200;
	}
	else if (snd > trd) {
		//best = "second";
		best = 2;
		total = snd_s + 200;
	}
	else {
		//best = "third";
		best = 3;
		total = trd_s + 200;
	}

	cout << "First manager's salary: " << fst_s << "$" << endl;
	cout << "Second manager's salary: " << snd_s << "$" << endl;
	cout << "Third manager's salary: " << trd_s << "$" << endl;
	cout << "Best manager is the " << best << ". Their total: " << total << "$" << endl;


	return 0;
}

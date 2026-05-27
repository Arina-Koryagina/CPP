#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    //  I
    cout << "\tI" << endl;
    // Старинная задача. 
    // Плата за быка 10 рублей, за корову – 5 рублей, за телёнка – полтинник (0,5 рубля).
    // Определить, можно ли ровно на M рублей купить ровно N голов скота.
    // Если это возможно, вывести "yes", в противном случае – "no".

    double M;
    cout << "Enter the price: ";
    cin >> M;
    int N;
    cout << "Enter the amount: ";
    cin >> N;

    int cost;
    bool answ;
    for (int bulls = 0; bulls <= N; bulls++) {
        for (int cows = 0; cows <= N - bulls; cows++) {
            int calves = N - bulls - cows;
            cost = bulls * 20 + cows * 10 + calves * 1;
            if (cost == M*2) {
                answ = true;
            }
        }
    }
    (answ) ? cout << "yes" << endl : cout << "no" << endl;


    //  II
    cout << "\n\tII" << endl;
    // Даны натуральное число n и целые числа b1, b2, ..., bn.
    // Найти номер последнего числа, большего 100.
    // Известно, что такие числа среди заданных имеются.

    int num, b;
    cout << "Enter n: ";
    cin >> num;

    int n_100 = 0;
    for (int i = 1; i <= num; i++) {
        cout << "Number: ";
        cin >> b;
        if (b > 100) { n_100 = i; }
    }

    cout << "Last b_i > 100, i = " << n_100 << endl;


    //  III
    cout << "\n\tIII" << endl;
    // В некоторой стране используются денежные купюры достоинством в 1, 2, 4, 8, 16, 32 и 64.
    // Дано натуральное число n. Как наименьшим количеством таких денежных купюр можно выплатить
    // суммы n, n + 1, ..., n + 10? / (указать количество каждой из используемых для выплаты купюр) -- не знаю как реализовать без списка
    // Предполагается, что имеется достаточно большое количество купюр всех достоинств.

    int n;
    cout << "Enter the number: ";
    cin >> n;

    for (int i = 0; i <= 10; i++) {
        int price = n + i, amount = 0, banknote;
        cout << "n + " << i << " (" << price << "): ";
        for (int i = 6; i >= 0; i--) {
            banknote = pow(2, i);
            while (price >= banknote) {
                price -= banknote;
                amount++;
            }
        }
        cout << amount << endl;
    }


    return 0;
}
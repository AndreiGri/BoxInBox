﻿#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");
    // Установка цвета фона терминала и цвета текста
    system("color 70");

    cout << endl;
    int a = 0;   // Объявляем и инициализируем переменные для записи длин сторон
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;

    cout << " Введите длинну сторон первой коробки: "; // Запрашиваем и записываем в переменные длины сторон
    cin >> a >> b >> c;
    cout << " Введите длину сторон второй коробки: ";
    cin >> d >> e >> f;

    cout << " -------Проверяем входит ли меньшая коробка в большую------- " << endl;

    if (a <= 0 || b <= 0 || c <= 0 || f <= 0 || e <= 0 || f <= 0) {
        cout << " Некорректно введены данные!" << endl;
    }
    else { // Проверяем входит ли вторая коробка в первую
        if ((d < a && e < b && f < c) || (d < b && e < c && f < a) || (d < c && e < a && f < b) ||
            (d < c && f < a && e < b) || (d < a && f < b && e < c) || (d < b && e < a && f < c)) {
            cout << " Вторая коробка помещается в первую!" << endl;
        }
        else { // Проверяем входит ли первая коробка во вторую
            if ((d > a && e > b && f > c) || (d > b && e > c && f > a) || (d > c && e > a && f > b) ||
                (d > c && f > a && e > b) || (d > a && f > b && e > c) || (d > b && e > a && f > c)) {
                cout << " Первая коробка помещается во вторую!" << endl;
            }
            else {
                cout << " Коробки не помещаются друг в друга!" << endl;
            }
        }
    }

    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}
#include <iostream> 
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    int a, b = 0;
    int res = 1;
    int operation;
    while (true) {
        cout << "Выберите операцию: \n 1. Разность \n 2. Сумма \n 3. Умножение \n 4. Деление \n 5. Возведение в степень \n 6. Квадратный корень \n 7. Процент от числа \n 8. Факториал \n 9.Выйти из программы \n Операция:  ";
        cin >> operation;

        switch (operation)
        {
        case 1:
            cout << "Введите a: ";
            cin >> a;
            cout << "Введите b: ";
            cin >> b;
            cout << a << "-" << b << " = " << a - b << '\n';
            break;

        case 2:
            cout << "Введите a: ";
            cin >> a;
            cout << "Введите b: ";
            cin >> b;
            cout << a << "+" << b << " = " << a + b << '\n';
            break;

        case 3:
            cout << "Введите a: ";
            cin >> a;
            cout << "Введите b: ";
            cin >> b;
            cout << a << "*" << b << " = " << a * b << '\n';
            break;

        case 4:
            cout << "Введите a: ";
            cin >> a;
            cout << "Введите b: ";
            cin >> b;
            cout << a << "/" << b << " = " << a / b << '\n';
            break;

        case 5:
            cout << "Введите a: ";
            cin >> a;
            cout << "Введите b: ";
            cin >> b;
            cout << a << " в степени " << b << " = " << pow(a, b) << '\n';
            break;

        case 6:
            cout << "Введите a: ";
            cin >> a;
            cout << "Квадратный корень числа" << a << " = " << sqrt(a) << '\n';
            break;
        case 7:

            cout << "Введите a: ";
            cin >> a;
            cout << "1% от числа" << a << " = " << (a / 100) * 1 << "\n";
            break;

        case 8:
            cout << "Введите a: ";
            cin >> a;
            for (b = 1; b <= a; b++) {
                res = res * b;
            }
            cout << a << "! = " << res << "\n";
            break;

        case 9:
            cout << "Программа завершена";
            return 0;
        default:
            cout << "Введены неккоректные данные";
            break;
        }
    };

    return 0;

}
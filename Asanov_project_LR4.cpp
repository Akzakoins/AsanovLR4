#include <iostream>

using namespace std;

int enterNumberX()
{
    int X;
    cout << "Введите трёхзначное число X: ";
    cin >> X;

    while (X < 100 || X > 999)
    {
        cout << "Ошибка: число не является трёхзначным. Повторите ввод: ";
        cin >> X;
    }

    cout << "Число X успешно сохранено: " << X << endl;
    return X;
    int X;
    cout << "Введите трёхзначное число X: ";
    cin >> X;

    while (X < 100 || X > 999)
    {
        cout << "Ошибка: число не является трёхзначным. Повторите ввод: ";
        cin >> X;
    }

    cout << "Число X успешно сохранено: " << X << endl;
    return X;
}
int enterDigitN()
{
    int N;
    cout << "Введите цифру N (0 — последняя, 1 — средняя, 2 — первая справа): ";
    cin >> N;

    while (N < 0 || N > 2)
    {
        cout << "Ошибка: N должно быть 0, 1 или 2. Повторите ввод: ";
        cin >> N;
    }

    cout << "Цифра N успешно сохранена: " << N << endl;
    return N;
}
void findFirstDigit() {}
void findNthDigit() {}

int main()
{
    setlocale(LC_ALL, "ru");
    int choice;
    cout << "Программа для работы с целыми трёхзначными числами." << endl;
    do
    {
        cout << "\n=== МЕНЮ ===" << endl;
        cout << "1. Ввести целое трёхзначное число X" << endl;
        cout << "2. Ввести цифру N (меньше количества разрядов числа X)" << endl;
        cout << "3. Найти первую цифру числа X" << endl;
        cout << "4. Найти N-ю цифру числа X (справа налево)" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите пункт меню: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            enterNumberX();
            break;
        case 2:
            enterDigitN();
            break;
        case 3:
            findFirstDigit();
            break;
        case 4:
            findNthDigit();
            break;
        case 0:
            cout << "Выход из программы." << endl;
            break;
        default:
            cout << "Неверный выбор. Повторите ввод." << endl;
        }
    } while (choice != 0);

    return 0;
}

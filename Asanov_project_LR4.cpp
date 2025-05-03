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
void findFirstDigit()
{
    int X;
    cout << "Введите трехзначное число X: ";
    cin >> X;

    if (X < 100 || X > 999)
    {
        cout << "Ошибка: X должно быть трехзначным числом.\n";
        return;
    }

    int firstDigit = X / 100;
    cout << "Первая цифра числа X: " << firstDigit << "\n";
}

void findNthDigitFromRight()
{
    int X, N;
    cout << "Введите трехзначное число X: ";
    cin >> X;

    if (X < 100 || X > 999)
    {
        std::cout << "Ошибка: X должно быть трехзначным числом.\n";
        return;
    }

    cout << "Введите номер цифры N (от 0 до 2, справа налево): ";
    cin >> N;

    if (N < 0 || N > 2)
    {
        cout << "Ошибка: допустимые значения N — 0, 1 или 2.\n";
        return;
    }

    int digit;
    for (int i = 0; i <= N; ++i)
    {
        digit = X % 10;
        X /= 10;
    }

    cout << "Цифра под номером N (справа налево): " << digit << "\n";
}

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

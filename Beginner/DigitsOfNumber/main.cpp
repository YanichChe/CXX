#include <iostream>
using namespace std;

int InputDigit()
{
    cout << "Введите пятизначное число: ";
    int digit;
    cin >> digit;

    return digit;
}

bool CheckDigit(int digit)
{
    if (digit < 10000 || digit > 99999)
    {
        cout << "Число не является пятизначным" << endl;
        return false;
    }

    return true;
}

void PrintDigitOfNumber(int digit)
{
    cout << "1 цифра равна: " << (digit / 10000) % 10 << endl;
    cout << "2 цифра равна: " << (digit / 1000) % 10 << endl;
    cout << "3 цифра равна: " << (digit / 100) % 10 << endl;
    cout << "4 цифра равна: " << (digit / 10) % 10 << endl;
    cout << "5 цифра равна: " << digit % 10 << endl;
}

int main(void)
{
    setlocale(0, "");

    int digit = InputDigit();

    if (!CheckDigit(digit))
    {
        return EXIT_SUCCESS;
    }

    PrintDigitOfNumber(digit);

    return EXIT_SUCCESS;
}
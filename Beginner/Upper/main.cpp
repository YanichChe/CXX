#include <iostream>
using namespace std;

char InputLetter()
{
    cout << "Введите букву нижнего регистра: ";
    char letter;
    cin >> letter;

    return letter;
}

void Upper(char letter)
{
    letter -= 32;
    cout << "Та же буква верхнего регистра: " << letter;
}

int main(void)
{
    char letter = InputLetter();
    Upper(letter);

    return EXIT_SUCCESS;
}
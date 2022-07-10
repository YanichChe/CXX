#include <iostream>
#include <cmath>
using namespace std;

int InputCount()
{
    int count;
    cout << "Введите количество иксов: ";
    cin >> count;

    return count;
}

void InputArguments(float *Z, float *B, float *A, float *Betta, int index)
{
    cout << "Введите значения Z, B, A, Betta для X" << index << endl;

    cout << "Z = ";
    cin >> *Z;

    cout << "B = ";
    cin >> *B;

    cout << "A = ";
    cin >> *A;

    cout << "Betta = ";
    cin >> *Betta;
}

float CountX(int index)
{

    float Z, B, A, Betta;

    InputArguments(&Z, &B, &A, &Betta, index);

    float X = pow(Z, 3) - B + pow(A, 2) / pow(tan(Betta), 2);

    return X;
}

float CountSum(int count)
{
    float sum = 0;

    for (int i = 0; i < count; i++)
    {
        sum += CountX(i);
    }

    return sum;
}

int main(void)
{
    setlocale(LC_ALL, "");

    int count = InputCount();

    cout << CountSum(count);

    return EXIT_SUCCESS;
}
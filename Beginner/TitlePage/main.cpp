#include <iostream>
using namespace std;

string InputString(string message)
{
    cout << message;
    string str;
    cin >> str;

    return str;
}

int GetMaxStringLength(string surname, string name, string patronymic, string group)
{
    string line1 = "Laboratory work № 1";
    string line2 = "Work completed by student from " + group;
    string line3 = surname + name + patronymic;

    if (line1.length() > line2.length() && line1.length() > line3.length())
    {
        return line1.length();
    }

    else if (line2.length() > line1.length() && line2.length() > line3.length())
    {
        return line2.length();
    }

    else
    {
        return line3.length();
    }
}

void PrintLineStar(int count)
{
    cout << "\t\t\t";
    for (int i = 0; i < count; i++)
    {
        cout << "*";
    }
    cout << '\n';
}

void PrintExtraSpaces(int count)
{
    for (int i = 0; i < count - 4; i++)
    {
        cout << " ";
    }
}

void PrintLine1(int lineLenght)
{
    string line = "Laboratory work № 1";
    cout << "\t\t\t* " + line;
    PrintExtraSpaces(lineLenght - line.length() + 2);
    cout << " *\n";
}

void PrintLine2(int lineLength, string group)
{
    string line = "Work completed by student from " + group;
    cout << "\t\t\t* " + line;
    PrintExtraSpaces(lineLength - line.length());
    cout << " *\n";
}

void PrintLine3(int lineLength, string surname, string name, string patronymic)
{
    string line = surname + ' ' + name + ' ' + patronymic;
    cout << "\t\t\t* " + line;
    PrintExtraSpaces(lineLength - line.length());
    cout << " *\n";
}

int main(void)
{
    string surname = InputString("Enter surname:");
    string name = InputString("Enter name:");
    string patronymic = InputString("Enter patronymic:");
    string group = InputString("Enter group number:");

    int lineLength = GetMaxStringLength(surname, name, patronymic, group) + 4;

    PrintLineStar(lineLength);
    PrintLine1(lineLength);
    PrintLine2(lineLength, group);
    PrintLine3(lineLength, surname, name, patronymic);
    PrintLineStar(lineLength);

    return EXIT_SUCCESS;
}
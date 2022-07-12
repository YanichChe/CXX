#include <iostream>
#include <vector>
#include "animal.h"
#include "functions.h"

using namespace std;

void AddAnimal(vector <Animal> animals)
{
    string name;
    cout << "Inpput name: ";
    cin >> name;

    bool isFind = false;

    for (int i = 0;  i < animals.size(); i++)
    {
        if (animals[i].GetName() == name){
            animals[i].SetCount(animals[i].GetCount() + 1);
            isFind = true;
        }
    }

    if (!isFind){
        cout << "No find";
    }

}

void CreateAnimal(vector <Animal> animals)
{
    string name;
    int count, price;

    cout << "Inpput name: ";
    cin >> name;

    cout << "Input count: ";
    cin >> count;

    cout << "Input price: ";
    cin >> price;

    Animal newAnimal(name, price, count);
    animals.push_back(newAnimal);
}

void SellAnimal(vector <Animal> animals)
{
    string name;
    cout << "Inpput name: ";
    cin >> name;

    bool isFind = false;

    for (int i = 0;  i < animals.size(); i++)
    {
        if (animals[i].GetName() == name){
            animals[i].SetCount(animals[i].GetCount() - 1);
            isFind = true;
        }
    }

    if (!isFind){
        cout << "No find";
    }
}

void PrintListAnimals(vector <Animal> animals)
{
    for (int i = 0;  i < animals.size(); i++)
    {
        animals[i].Print();
    }
}

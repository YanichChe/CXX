#include <iostream>
#include <vector>
#include "animal.h"
#include "menu.h"
#include "functions.h"

using namespace std;

void PrintMenu()
{
    cout<< "Choose command: " << endl;
    cout<< "1 - add animal" << endl;
    cout<< "2 - create new animal" << endl;
    cout<< "3 - sell animal" << endl;
    cout<< "4 - print all animals" << endl;
    cout<< "5 - exit" << endl;
}

void Start(int commandNumber, vector <Animal> animals)
{
    switch (commandNumber)
    {
    case 1:
        AddAnimal(animals);
        break;
    
    case 2:
        CreateAnimal(animals);
        break;

    case 3:
        SellAnimal(animals);
        break;

    case 4:
        PrintListAnimals(animals);
        break;

    default:
        break;
    }
}

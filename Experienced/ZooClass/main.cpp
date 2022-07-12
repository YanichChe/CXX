#include <iostream>
#include <vector>
#include "animal.h"
#include "menu.h"

using namespace std;

int main(void)
{
    vector <Animal> animals;

    int commandNumber = 0;

    while (commandNumber != 5)
    {
        PrintMenu();
        cin >> commandNumber;
        Start(commandNumber, animals);
    }
    
    return EXIT_SUCCESS;
}
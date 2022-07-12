#include <iostream>
#include "animal.h"

using namespace std;

class Animal
{
private:
    string name;
    int price;
    int count;

public:
    string GetName()
    {
        return name;
    }

    int GetPrice()
    {
        return price;
    }

    int GetCount()
    {
        return count;
    }

    void SetName(string name)
    {
        this->name = name;
    }

    void SetPrice(int price)
    {
        this->price = price;
    }

    void SetCount(int count)
    {
        this->count = count;
    }

    Animal(string name, int price, int count)
    {
        this->name = name;
        this->price = price;
        this->count = count;
    }

    void Print()
    {
        cout<< "Name: " <<  name << endl;
        cout<< "Price: " <<  price << endl;
        cout<< "Count: " <<  count << endl;
    

    }
    
    Animal();

};
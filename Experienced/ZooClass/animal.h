#include <iostream>

class Animal
{
private:
    std::string name;
    int price;
    int count;

public:
    std::string GetName();
    int GetPrice();
    int GetCount();

    void SetName(std::string name);
    void SetPrice(int price);
    void SetCount(int count);

    Animal(std::string name, int price, int number);
    Animal();

    void Print();
};
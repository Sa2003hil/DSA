#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    virtual void makeSound() = 0;
};

class Lion : public Animal
{
public:
    void makeSound()
    {
        cout << "Roar" << endl;
    }
};

class Elephant : public Animal
{
public:
    void makeSound()
    {
        cout << "Trumpet" << endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */

    int choise;
    cout << "Enter 1 for Lion and 2 for Elephant" << endl;
    cin >> choise;

    Animal *ptr;
    Lion l1;
    Elephant e1;

    switch (choise)
    {
    case 1:
        ptr = &l1;
        ptr->makeSound();
        break;
    case 2:
        ptr = &e1;
        ptr->makeSound();
        break;
    default:
        cout << "Invalid Input" << endl;

        return 0;
    }
}

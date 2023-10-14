/*
Parameterised Constructor :



This Keyword:-



*/

#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    // Simple constructor
    Hero()
    {
        cout << "Constructor called" << endl;
    }

    // Parameterised Constructor

    Hero(int health)
    {
        // health = health;  --->according to this implementation hum ek hi (same) variable mein hi value daale jaa rhe hai which is not correct... here we want that line 18 pe jo health hai usmein line 31 valli health ki value dal jaye ----> So to do this we use this keyword
        cout << "this -> " << this << endl;
        this->health = health;
    }

    int getHealth()
    {
        return health;
    }
};

int main(int argc, char const *argv[])
{
    Hero Ramesh(10);
    cout << "Address of Ramesh :" << &Ramesh << endl;
    Ramesh.getHealth();

    return 0;
}

/*
Parameterised Constructor :

This Keyword:- this keyword is a pointer which points to the current object. It is used to refer to the current class object.

NOTE:-

*/

#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    // Parameterised Constructor

    Hero(int health)
    {
        // health = health;  --->according to this implementation hum ek hi (same) variable mein hi value daale jaa rhe hai which is not correct... here we want that line 17 pe jo health hai usmein line 31 valli health ki value dal jaye ----> So to do this we use this keyword
        cout << "this -> " << this << endl;
        this->health = health;
    }

    // Multiple Parameterised Constructor

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    int getHealth()
    {
        return health;
    }

    void print()
    {
        cout << "Health : " << health << endl;
        cout << "Level : " << level << endl;
    }
};

int main(int argc, char const *argv[])
{
    // object created STATICALLY along with this a constructor is called automatically
    Hero Ramesh(10);
    cout << "Address of Ramesh :" << &Ramesh << endl;
    Ramesh.getHealth();

    // Obect created DYNAMICALLY
    Hero *h = new Hero(20);

    // Multiple Parameterised Object
    Hero temp(30, 'A');
    temp.print();

    return 0;
}

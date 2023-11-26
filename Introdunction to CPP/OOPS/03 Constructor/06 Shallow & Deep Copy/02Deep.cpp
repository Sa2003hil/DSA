/*
In case of Deep Copy, a new array is created and elements of the original array is copied into it. It means that any changes made to a copy of array do not reflect in the original array.


*/

#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;
    char *name;

    Hero()
    {
        cout << "Default Constructor Called" << endl;
        name = new char[100];
    }

    // Parameterised Constructor

    Hero(int health)
    {
        this->health = health;
    }

    // Multiple Parameterised Constructor

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    // Copy Constructor
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1]; // a new array is created and elements of the original array is copied into it.
        strcpy(ch, temp.name);
        this->name = ch;

        this->health = temp.health;
        this->level = temp.level;
    }

    // Getter
    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    // Setter
    void setHealth(int health)
    {
        this->health = health;
    }

    void setLevel(char level)
    {
        this->level = level;
    }

    // Getter and Setter for Name
    char *getName()
    {
        return name;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    void print()
    {
        cout << "[Name: " << name << ", Health: " << health << ", Level: " << level << "]" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Hero hero1;
    hero1.setHealth(100);
    hero1.setLevel('A');
    char name[5] = "Hero";
    hero1.setName(name);

    hero1.print();

    // Shallow Copy : Meaning of shallow copy is that if we change the value of one object then the value of other object will also change. because both the objects are pointing to the same memory location. to prevent this we use deep copy.
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'z';
    hero1.print();

    hero2.print();

    return 0;
}

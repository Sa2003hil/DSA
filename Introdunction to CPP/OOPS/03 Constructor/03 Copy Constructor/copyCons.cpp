#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    // Simple Constructor
    Hero()
    {
        cout << "Constructor Called" << endl;
    }

    // Parametrised Constructor
    Hero(int health)
    {
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    // We can also create our own copy constructor
    Hero(Hero &temp)
    {
        cout << "Copy Constructor Called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << "health - " << this->health << endl;
        cout << "level - " << this->level << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{
    Hero Suresh(70, 'c');
    Suresh.print();

    // This is the copy constructor
    Hero Ritesh(Suresh);
    Ritesh.print();

    return 0;
}

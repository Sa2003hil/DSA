#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    // parameterise constructor
    Hero(int health)
    {
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
    /* code */
    Hero Ramesh(10);
    cout << &Ramesh << endl;
    Ramesh.getHealth();

    return 0;
}

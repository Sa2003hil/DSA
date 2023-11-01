/*
Member functions:  functions defined inside the class

points to remember:-
1. class can have number of member functions

Member functions can be of two types:-
1. Inside the class
2. Outside the class

*/

// Member function

#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
    int health;
    char level;

public:
    void print() // Member function
    {
        cout << "Health : " << health << endl;
        cout << "Level : " << level << endl;
    }
};

int main(int argc, char const *argv[])
{
    Hero Ramesh;

    return 0;
}

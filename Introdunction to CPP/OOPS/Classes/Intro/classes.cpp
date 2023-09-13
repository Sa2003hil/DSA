#include <bits/stdc++.h>
using namespace std;

// classes in oops are used to create our own data types .

class Hero
{

    // properties of the class
    char name[10 0];
    int health;
    int level;
};

int main(int argc, char const *argv[])
{

    /*
    Object: is an instance of the class.
    creating an object of the class
    syntax:
    class_name object_name;

    */
    Hero h1;

    cout << "size : " << sizeof(h1) << endl;

    return 0;
}

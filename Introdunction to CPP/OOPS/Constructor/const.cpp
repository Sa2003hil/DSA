/*
Constructor :

A constructor is a special type of member function that is called automatically when an object is created.--> Default Constructor
*/

#include <iostream>
using namespace std;

class Hero
{
public:
    char level;

    /*
    Note :

    if make a constructor statically then the default constructor is not called it vanishes automatically

    */

    Hero() // making of  Default constructor
    {
        cout << "This is constructor" << endl;
    }
};

int main(int argc, char const *argv[])
{

    cout << "Hi" << endl;
    Hero Ramesh; // when we create an object of a class then the constructor is called automatically
    cout << "Hello" << endl;

    Hero *h1 = new Hero; // Dynamic allocation of object --> again the constructor is called automatically

    return 0;
}

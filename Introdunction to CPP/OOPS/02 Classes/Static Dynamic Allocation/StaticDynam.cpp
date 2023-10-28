#include <iostream>
using namespace std;

// Class
class Hero
{
    // Access Modifiers
private:
    int id;

public:
    string name;
    int age;

    void display()
    {
        cout << "The name is :" << name << endl;
        cout << "Age :" << age << endl;
    }

    int getId()
    {
        return id;
    }

    void setId(int identity)
    {
        id = identity;
    }
};

int main(int argc, char const *argv[])
{
    // Static Allocation of object
    Hero h1;

    h1.name = "sahil";
    h1.age = 20;

    h1.setId(2210);
    h1.getId();

    h1.display();

    cout << "Roll no :" << h1.getId() << endl;

    /*

    Syntax:

    Dynamic Allocation:
    ClassName *object = new ClassName();

    */

    Hero *h2 = new Hero;

    h2->name = "Arav"; // we can use arrow pointer to assign the values
    h2->age = 20;

    // Access using derefrence (*) with (.) dot operator
    cout << "Name: " << (*h2).name << endl;
    cout << "Age: " << (*h2).age << endl;

    // Arrow funtion to print the values
    cout << "Name: " << h2->name << endl;
    cout << "Age: " << h2->age << endl;

    return 0;
}

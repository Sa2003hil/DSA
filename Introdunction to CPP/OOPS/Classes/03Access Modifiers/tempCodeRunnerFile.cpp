/*
Access Modifieres

The access modifiers of C++ allows us to determine which class members/properties are accessible to other classes and functions, and which are not.

There are mainly three types of access modifiers in C++  :

1.Public
2.Private
3.Protected

-> Public : The class members declared as public are accessible to all other classes and functions. The data members and member functions declared public can be accessed by other classes/functions.

-> Private (Default) : The class members declared as private can be accessed only by the functions inside the class. They are not allowed to be accessed directly by any object or function outside the class. Only the member functions or the friend functions are allowed to access the private data members of a class.


(if any property is private so we can read it by using getter)


>> Note : When we create an object of a class using the

   1. New keyword, then the object is created in the heap memory. This is called dynamic     allocation of memory.

   2. But when we create an object of a class without using the new keyword, then the object is created in the stack memory. This is called static allocation of memory.


Synatax:

Dynamic Allocation:
ClassName *object = new ClassName();


Static Allocation:
ClassName object;

*/

#include <iostream>
#include <string>
using namespace std;

class Hero
{

    // Access Modifiers : Public, Private, Protected
private:
    int id;
    int aadhar;

public:
    string name;
    int age;
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }

    int getId() // This is the getter for getting id
    {
        return id;
    }

    void setId(int identity) // This is the setter for setting id
    {
        id = identity;
    }

    void setAadhar(int aadharNo)
    {
        aadhar = aadharNo;
    }
    int getAadhar()
    {
        return aadhar;
    }
};

int main(int argc, char const *argv[])
{
    // Here we create an object statically(static allocation)
    Hero h1;
    Hero Ramesh;

    h1.name = "sahil";
    h1.age = 20;

    Ramesh.age = 44;
    Ramesh.setAadhar(123456789);

    // h1.display();

    // Use setter to set the value
    h1.setId(21);

    // Use getter to get the value
    cout << "Age of Ramesh is :" << Ramesh.age << endl;
    cout << "Id of Sahil is: " << h1.getId() << endl;
    cout << "Aadhar of Ramesh is : " << Ramesh.getAadhar() << endl;

    return 0;
}

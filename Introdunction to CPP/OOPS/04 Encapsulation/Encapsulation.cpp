/*
Encapsulation :- It is the process of wrapping up of data members and functions under a single entity.

Advantages of Encapsulation :-

1. It provides data hiding.(Data hiding means that the data members of a class are not accessible to the outside world, instead they are accessible only through the member functions of the class.)

Fully Encapsulated class :- If all the data members are private and all the member functions are public then the class is said to be fully encapsulated class.



*/

#include <bits/stdc++.h>
using namespace std;

// this is the example of encapsulation in which all the data members are private and all the member functions are public

class Student
{
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    Student first;
    cout << "sab theek chal raha hai" << endl;
    return 0;
}

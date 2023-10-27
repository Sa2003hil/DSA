#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    // Public member functions to set and get private members
    void setName(const string &newName)
    {
        name = newName;
    }

    string getName() const
    {
        return name;
    }

    void setAge(int newAge)
    {
        if (newAge >= 8)
        {
            age = newAge;
        }
        else
        {
            cout << "Age cannot be negative." << endl;
        }
    }

    int getAge() const
    {
        return age;
    }

    void displayInfo() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student student1;

    // Accessing and setting private members using public member functions
    student1.setName("Sahil");
    student1.setAge(8);

    // Accessing private members indirectly through public member functions
    cout << "Student's Name: " << student1.getName() << endl;
    cout << "Student's Age: " << student1.getAge() << endl;

    student1.displayInfo();

    return 0;
}

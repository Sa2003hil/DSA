// Inheritence is the process of inheriting the properties of one class to another class

#include <bits/stdc++.h>
using namespace std;

class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return age;
    }

    void setWeight(int w)
    {
        this->weight = w;
    }
};

// Inheritence Syntax (class derived_class_name : visibility_mode base_class_name)
class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male sleeping" << endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */

    Male m1;
    cout << m1.age << endl;
    cout << m1.weight << endl;
    cout << m1.height << endl;

    cout << m1.color << endl;
    m1.setWeight(50);
    cout << m1.weight << endl;
    m1.sleep();
    return 0;
}

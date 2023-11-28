//  Single Inheritence : When we have only one base class and one derived class, such an inheritance is called single inheritance.

#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    int height;
    int weight;
};

class dog : public Animal
{
public:
    string color;

    void display()
    {
        cout << "Height is " << height << " cm" << endl;
        cout << "Weight is " << weight << " kg" << endl;
        cout << "Color is " << color << endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */

    dog snoopy;
    snoopy.height = 100;
    snoopy.weight = 20;
    snoopy.color = "Light Brown";
    snoopy.display();
}

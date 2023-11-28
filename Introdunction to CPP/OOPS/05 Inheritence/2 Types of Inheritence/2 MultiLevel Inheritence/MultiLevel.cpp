// Multilevel Inheritence : When we have a chain of inheritance, such an inheritance is called multilevel inheritance.

#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    int height;
    int weight;
};

// inherited from Animal class
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

// inherited from dog class
class Labrador : public dog
{
};

int main(int argc, char const *argv[])
{
    Labrador g;
    g.height = 100;
    g.weight = 20;
    g.color = "Light Brown";
    g.display();
    return 0;
}

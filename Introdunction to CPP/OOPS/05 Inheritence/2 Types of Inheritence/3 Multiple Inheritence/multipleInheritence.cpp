#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    int height;
    int weight;

    void bark()
    {
        cout << "Barking" << endl;
    }
};

class Human
{
public:
    string name;

    void speak()
    {
        cout << "Speaking" << endl;
    }
};

// Multiple Inheritence
class Hybrid : public Animal, public Human
{
};

int main(int argc, char const *argv[])
{
    /* code */
    Hybrid h1;
    h1.bark();
    h1.speak();
    return 0;
}

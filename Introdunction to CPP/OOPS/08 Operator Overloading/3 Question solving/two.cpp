#include <iostream>
using namespace std;

class Distance
{
private:
    double feet, inch;

public:
    void readDistance()
    {
        cout << "Enter feet and inch" << endl;
        cin >> feet >> inch;
    }

    // syntax for operator overloading
    void displayDistance()
    {
        cout << feet << "'" << inch << '"' << endl;
    }

    Distance operator+(const Distance &d2)
    {
        Distance d3;
        // formula : d3 = d1 + d2
        d3.feet = feet + d2.feet;
        d3.inch = inch + d2.inch;
        return d3;
    }

    // for multiplication
    Distance operator*(const Distance &d2)
    {
        Distance d3;
        // formula : d3 = d1 * d2
        d3.feet = feet * d2.feet;
        d3.inch = inch * d2.inch;

        // Convert excess inches to feet
        while (d3.inch >= 12.0)
        {
            d3.feet += 1.0;
            d3.inch -= 12.0;
        }

        return d3;
    }
};

int main(int argc, char const *argv[])
{
    Distance d1, d2, d3;

    d1.readDistance();
    d2.readDistance();

    // for addition
    d3 = d1 + d2;
    cout << "Addition Result: ";
    d3.displayDistance();

    // for multiplication
    d3 = d1 * d2;
    cout << "Multiplication Result: ";
    d3.displayDistance();

    return 0;
}

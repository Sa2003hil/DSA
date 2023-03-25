#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    //  Relational Operators:-
    int a = 4;
    int b = 5;

    bool first = (a == b);
    cout << first << endl; // it will give 0 (FALSE)

    bool second = (a > b);
    cout << second << endl; // it will give 0 (FALSE)

    bool third = (a < b);
    cout << third << endl; // it will give 1 (TRUE)

    bool fourth = (a >= b);
    cout << fourth << endl; // it will give 0 (FALSE)

    bool fifth = (a <= b);
    cout << fifth << endl; // it will give 1 (TRUE)

    // Logical Operators:-

    // 1. Logical AND operator(&&) : All conditions to be true for outbut to be TRUE.

    int a = 5;
    int b = 19;
    int c = 15;
    cout << ((a > 5) && (b != 0) && (c >= 15)); // output : 1(TRUE)

    // 2. Logical OR operator(||) : Atleast one condition to be true for output to be TRUE.

    int a = 5;
    int b = 10;
    int c = 15;
    cout << ((a > 5) || (b < 10) || (c >= 15));

    // 3. Logical AND operator(!): Inevert the logic TRUE ---> FALSE and FALSE ---> TRUE.

    int a = 10;
    int b = 0;
    cout << (!a) << endl; // 0
    cout << (!b) << endl; // 1

    return 0;
}

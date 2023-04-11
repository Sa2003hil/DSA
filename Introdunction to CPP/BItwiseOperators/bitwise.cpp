#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 4;
    int b = 6;

    cout << " a&b " << (a & b) << endl; // AND
    cout << " a|b " << (a | b) << endl; // OR
    cout << " ~a " << (~a) << endl;     // NOT
    cout << " a^b " << (a ^ b) << endl; // XOR

    return 0;
}

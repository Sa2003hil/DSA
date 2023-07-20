// How to input Char Array

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char name[20];
    cout << "Enter your name" << endl;

    cin >> name;

    // There is Null Character at the end of the string '\0'
    cout << "Your name is : " << name << endl;
    return 0;
}

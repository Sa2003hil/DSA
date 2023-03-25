#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char ch;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "This is lowecase letter" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "This is uppercase letter" << endl;
    }

    else
    {
        cout << "This is a digit" << endl;
    }
    return 0;
}

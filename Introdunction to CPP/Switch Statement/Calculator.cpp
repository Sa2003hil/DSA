#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char op;
    cout << "what operation do you want to do:" << endl;
    cin >> op;

    int num1;
    cout << "Enter number 1 here:" << endl;
    cin >> num1;

    int num2;
    cout << "Enter num 2 here:" << endl;
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << "num1 + num2 = " << num1 + num2 << endl;
        break;
    case '-':
        cout << "num1 - num2 = " << num1 - num2 << endl;
        break;
    case '*':
        cout << "num1 * num2 = " << num1 * num2 << endl;
        break;
    case '/':
        cout << "num1 / num2 = " << num1 / num2 << endl;
        break;
    }
    return 0;
}

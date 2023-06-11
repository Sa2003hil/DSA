#include <iostream>
using namespace std;

int power(int num1, int num2)
{
    /* cout<<a<<endl;    ---> we cant use this here because the scope of a is in within main */
    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * num1;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;

    int answer = power(a, b);
    cout << answer << endl;

    return 0;
}

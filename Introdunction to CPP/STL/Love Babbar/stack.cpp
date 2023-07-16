// Stacks are a type of container adaptors with LIFO(Last In First Out) type of working....... the item placed at last is on the top

#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<string> s;

    s.push("Sahil");
    s.push("love");
    s.push("Babbar");

    cout << s.top() << endl;

    s.pop();

    cout << s.top() << endl;

    return 0;
}

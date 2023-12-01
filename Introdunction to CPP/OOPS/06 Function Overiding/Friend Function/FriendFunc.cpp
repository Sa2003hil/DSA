/*
Friend Function :
    ->  A friend function is a function that is not a member of a class but has access to the class's private and protected members.

Some points on friend functions :
-> The function is not in the scope of the class to which it has been declared as a friend.

-> It cannot be called using the object as it is not in the scope of that class.

-> It can be invoked like a normal function without using the object.

-> It cannot access the member names directly and has to use an object name and dot membership operator with the member name.

-> It can be declared either in the private or the public part.

*/

#include <bits/stdc++.h>
using namespace std;

class demo
{
    int a, b;

public:
    void getData();
    friend int sum(demo); // Friend Function
};

void demo::getData()
{
    cout << "Enter the value of a and b : ";
    cin >> a >> b;
};

int sum(demo d)
{
    return d.a + d.b;
};

int main()
{
    demo aa;
    aa.getData();
    cout << "Sum = " << sum(aa) << endl;

    return 0;
}

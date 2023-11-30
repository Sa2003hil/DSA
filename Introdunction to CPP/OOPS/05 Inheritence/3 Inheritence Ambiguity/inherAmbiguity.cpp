/*
Inheritence Ambiguity : It is a situation when a class is derived from two base classes and it inherits two methods with same name from both the base classes.

        class A                   class B
        func()                      func()
            |                       |
               ----> class C <------
                    func()
                    func()


        now if we make a object of class C and call func() then it will give error because compiler will not be able to decide which func() to call.


       ->  to solve this problem we use scope resolution operator.

       obj.A::func(); // this will call func() of class A
       obj.B::func(); // this will call func() of class B

*/

#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void func()
    {
        cout << "Inherited from class A" << endl;
    }
};
class B
{
public:
    void func()
    {
        cout << "Inherited from class B" << endl;
    }
};

class C : public A, public B
{
};

int main(int argc, char const *argv[])
{
    /* code */
    C obj;
    // obj.func(); // this will give error to solve this we use scope resolution operator
    obj.A::func();
    obj.B::func();
    return 0;
}

// Inheritence is the process of inheriting the properties of one class to another class

#include <bits/stdc++.h>
using namespace std;

class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return age;
    }

    void setWeight(int w)
    {
        this->weight = w;
    }
};

// Inheritence Syntax (class derived_class_name : visibility_mode base_class_name)
class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male sleeping" << endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */

    Male m1;
    cout << m1.age << endl;
    cout << m1.weight << endl;
    cout << m1.height << endl;

    cout << m1.color << endl;
    m1.setWeight(50);
    cout << m1.weight << endl;
    m1.sleep();
    return 0;
}

/*
Inheritence access specifier

1. Public
2. Private
3. Protected

Public Inheritence
Super class  ----  Sub class  ---- answer
     public  ----  public -----> public
     public  ----  private ----> private
     public  ----  protected --> protected  (child class can access protected data member of parent class)

     exapmle for public --- protected inheritence
        class A
        {
            public:
                int a;
        };
        class Male : protected A
        {
            public:
                string color;

            int getA(){
                return this->a;
            }
        };

        int main(){
            Male m1;
            cout<< m1.a << endl; // not accessible so we have to make a getter inside child class to access it

            cout<< m1.getA() << endl; // now it is accessible
        }

_______________________________________________________________________________________________________________________

Protected Inheritence
Super class  ----  Sub class  ---- answer
     protected ----  public -----> protected
     protected ----  private ----> private
     protected ----  protected --> protected

_______________________________________________________________________________________________________________________

Private Inheritence (private data memeber of parent class is not accessible even in child class )
Super class  ----  Sub class  ---- answer
     private ----  public -----> Not Accessible
     private ----  private ----> Not Accessible
     private ----  protected --> Not Accessible

*/

#include <bits/stdc++.h>
using namespace std;
#define MAX 10

char myStack[MAX];
int top = -1;

void push(char data)
{
    // check if the stack is full
    if (top < MAX - 1)
    {
        top++;
        myStack[top] = data;
    }
    else
    {
        cout << "Stack overflow! " << endl;
    }
}

void pop(char data)
{
    if (top >= 0)
    {
        }
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

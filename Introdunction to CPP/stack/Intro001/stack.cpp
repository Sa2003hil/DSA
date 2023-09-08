#include <iostream>
using namespace std;

#define n 5

int arr[n];
int top = -1;

void push(int data)
{
    if (top == n - 1)
    {
        cout << "Stack Overflow" << endl;
        return;
    }
    top++;
    arr[top] = data;
}

int pop()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    int data = arr[top];
    top--;
    return data;
}

int main()
{
    push(1);
    push(2);
    push(3);

    cout << "Popped element : " << pop() << endl;

    return 0;
}

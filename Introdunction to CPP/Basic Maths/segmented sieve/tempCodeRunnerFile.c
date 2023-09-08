#include <stdio.h>
int stack[2];
int top = -1;

void push(int data)
{
    if (top == 3)
    {
        printf("stakck is full");
        return;
    }
    top += 1;
    stack[top] = data;
}

int main(int argc, char const *argv[])
{
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);

    return 0;
}

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(char data)
{
    if (top == MAX_SIZE - 1)
    {
        printf("Stack is full.\n");
        return;
    }
    top += 1;
    stack[top] = data;
}

char pop()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
        return '\0'; // Return null character if the stack is empty
    }
    char val = stack[top];
    top -= 1;
    return val;
}

int main()
{
    char input[MAX_SIZE];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin); // fgets is used to read a string with spaces

    // Push each character onto the stack
    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] != '\n') // jab tak input[i] newline character nahi hai tab tak push karte raho

        { // Ignore the newline character from fgets
            push(input[i]);
        }
    }

    printf("Reversed string: ");
    while (top != -1) // jab tak stack empty nahi ho jata tab tak pop karte raho and print the popped character one by one
    {
        char reversedChar = pop();
        printf("%c", reversedChar);
    }
    printf("\n");

    return 0;
}

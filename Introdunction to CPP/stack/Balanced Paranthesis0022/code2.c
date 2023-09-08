#include <stdio.h>
#include <string.h>
#define MAX 40

char stack[MAX];
int top = -1;

void push(char s)
{
    top++;
    stack[top] = s;
}

char pop()
{
    char value = stack[top];
    top--;
    return value;
}

int main()
{
    char str[MAX];
    printf("Enter a string for brackets: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
            push(str[i]);
        else if (str[i] == ')' || str[i] == ']' || str[i] == '}')
        {
            if (top == -1)
            {
                printf("Unbalanced brackets\n");
                return 0;
            }
            char brac = pop(); // pop the top element from the stack and check if it matches with the current bracket or not
            if ((str[i] == ')' && brac != '(') ||
                (str[i] == ']' && brac != '[') ||
                (str[i] == '}' && brac != '{'))
            {
                printf("Unbalanced brackets\n");
                return 0;
            }
        }
    }

    if (top == -1) // this condition is to check if the stack is empty or not if the stack is empty (means all brackets matched) then the brackets are balanced
    {
        printf("Balanced brackets\n");
    }
    else
    {
        printf("Unbalanced brackets\n");
    }
    return 0;
}
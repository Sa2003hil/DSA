#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top = -1;

void push(int data)
{
    if (top == MAX_SIZE - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    else
    {
        top++;
        stack[top] = data;
    }
}

int pop()
{
    if (top == -1)
    {
        printf("Stack underflow\n");
        return -1;
    }
    else
    {
        int ans = stack[top];
        top--;
        return ans;
    }
}

int is_operator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str[100];
    gets(str);
    int length = strlen(str);
    for (int i = length - 1; i != -1; i--)
    {
        if (top == -1)
        {
            int t = str[i];
            push(str[i] - 48);
        }
        else if (is_operator(str[i]))
        {
            int temp1 = pop();
            int temp2 = pop();
            int result;
            switch (str[i])
            {
            case '+':
                result = temp1 + temp2;
                break;
            case '-':
                result = temp1 - temp2;
                break;
            case '*':
                result = temp1 * temp2;
                break;
            case '/':
                result = temp1 / temp2;
                break;
            }
            push(result);
        }
    }
    printf("%d", stack[top]);
    return 0;
}
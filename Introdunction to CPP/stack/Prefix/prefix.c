#include <stdio.h>
#include <string.h>
#define max 10

int stack[max];
int top = -1;

void push(int data)
{
    if (top == max - 1)
    {
        printf("Stack overflow");
        return;
    }
    top++;
    stack[top] = data;
}

int pop()
{
    if (top == -1)
    {
        printf("stack is full");
        return -1;
    }

    int item = stack[top];
    top--;
    return item;
}

int is_operator(char symbol)
{
    if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/')
    {
        return 1;
    }
    return 0;
}

int evaluate(char *expression)
{
    int operand1, operand2, result;

    for (int i = strlen(expression) - 1; i >= 0; i--)
    {
        char symbol = expression[i];

        if (symbol >= '0' && symbol <= '9')
        {
            int num = symbol - '0';
            push(num);
        }
        else if (is_operator(symbol))
        {
            operand1 = pop();
            operand2 = pop();

            switch (symbol)
            {
            case '+':
                result = operand1 + operand2;
                break;
            case '*':
                result = operand1 * operand2;
                break;
            case '/':
                result = operand1 / operand2;
                break;
            case '-':
                result = operand1 - operand2;
                break;
            }
            push(result);
        }
    }
    return stack[top];
}

int main(int argc, char const *argv[])
{
    char expression[] = "- + 7 * 45 +20";
    printf("result : %d", evaluate(expression));
    return 0;
}

#include <stdio.h>
#define MAX 100

char stack[MAX];
char top = -1;

void push(char data)
{
    if (top == MAX - 1)
    {
        printf("Stack overflow");
        return;
    }
    top++;
    stack[top] = data;
}

char pop()
{
    if (top == -1)
    {
        printf("Stack empty");
        return -1;
    }
    char data = stack[top];
    top--;
    return data;
}

char is_operator(char symbol)
{
    if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/')
    {
        return 1;
    }
    return 0;
}

char evaluate(char *expression)
{
    int operand1, operand2, result;

    for (int i = 0; expression[i] != '\0'; i++)
    {
        char symbol = expression[i];

        if (symbol >= '0' && symbol <= '9')
        {
            int num = symbol - '0';  
            push(num);
        }
        else if (is_operator(symbol))
        {
            operand2 = pop();
            operand1 = pop();

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

// char evaluate(char *expression)
// {
//     int i;
//     char symbol = expression[i];
//     int operand1, operand2, result;

//     while (symbol != '\0')
//     {
//         if (symbol >= '0' && symbol <= '9')
//         {
//             int num = symbol - '0';
//             push(num);
//         }

//         else if (is_operator(symbol))
//         {
//             operand2 = pop();
//             operand1 = pop();

//             switch (symbol)
//             {
//             case '+':
//                 result = operand1 + operand2;
//                 break;
//             case '*':
//                 result = operand1 * operand2;
//                 break;
//             case '/':
//                 result = operand1 / operand2;
//                 break;
//             case '-':
//                 result = operand1 - operand2;
//                 break;
//             }
//             push(result);
//         }
//         i++;
//         symbol = expression[i];
//     }
//     result = pop();
//     return result;
// }

int main(int argc, char const *argv[])
{
    char expression[] = "5 6 7 + * 8 -";
    int result = evaluate(expression);
    printf("Result is = %d\n", result);
    return 0;
}

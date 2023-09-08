#include <stdio.h>
#include <string.h>

#define MAX 10

int top = -1;
int count = 0;
char input[MAX];
char outtput[MAX];

void push(char s)
{
    top++;
    input[top] = s;
}



    int main(int argc, char const *argv[])
{
    char str[MAX];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        push(str[i]);
    }
    for (int i = 0; i < strlen(str); i++)
    {
        push(str[i]);
    }
    

    return 0;
}

#include <stdio.h>
#include <string.h>
#define MAX 100

int main(int argc, char const *argv[])
{

    char str[MAX];
    fgets(str, MAX, stdin);

    int orileng = strlen(str);

    int count = 1;

    for (int i = 0; i < orileng - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            printf("%c%d", str[i], count);
            count = 1;
        }
    }

    return 0;
}

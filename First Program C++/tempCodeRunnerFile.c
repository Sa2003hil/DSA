#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[100];
    fgets(str, 100, stdin);

    int leng = strlen(str);

    int totallen = 0, spaces = 0, words = 0;

    for (int i = 0; i < leng; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == ' ')
        {
            totallen++;
        }

        if (str[i] == ' ')
        {
            spaces++;
        }
    }

    printf("Length :%d\n", totallen);
    printf("Spaces :%d\n", spaces);
    printf("Words :%d\n", spaces + 1);

    return 0;
}

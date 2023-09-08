/*
Dangling pointer : is a pointer which is pointing to the memory location which is not valid anymore.
*/

#include <stdio.h>

int *fuc()
{
    int num = 10;
    return &num; // here we are returning the address of the local variable
                 // which is not valid anymore after the function call is over
}

int main(int argc, char const *argv[])
{

    int *ptr = NULL;
    ptr = fuc(); // here this pointer is called the dangling pointer because
                 // it is pointing to the memory location which is not valid
                 // anymore
    printf("%d", &ptr);

    // this causes the segmentation fault means the program is trying to access the memory location which is not valid anymore
    return 0;
}

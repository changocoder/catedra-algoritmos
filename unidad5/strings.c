#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[5];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name:%s ", name);
    return 0;
} 

#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD 0

int main(){

    int i;

    for(i=100 ; i >= CANTIDAD ; i= i-10 ){

        printf( "- %d \n", i);

    }

    system("pause");
    
    return 0;
}
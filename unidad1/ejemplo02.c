/*
Desarrollar un programa en C que me permita calcular el promedio de 
tres numeros enteros y mostrarlo por consola

Formateo de valores en el printf:
entero %d
float  %f
char   %c
*/

// Declarar una constante en C
#define CANTIDAD_NOTAS 3

#include<stdio.h>
int main(){
	int num4;
    int num1 = 33;

    num4 = ++ num1;

    printf( " num1: %d \n num4: %d", num1, num4 );
    // num1 = 34  --- num4 = 34 

    /*
    int num2 = 103;
    int num3 = 55;
	
    float prom;
	
    //calculo del promedio
	prom = ( num1 + num2 + num3 ) / CANTIDAD_NOTAS;

   
	
	printf( "El promedio es %.2f " , prom);
	 */
	return 0;
}
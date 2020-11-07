#include <stdio.h>

int main(){

    float promedio;
    int nota1;
    int nota2;

    printf( " ingrese la nota del alumno: ");
    scanf("%d", &nota1);
    
    printf( " ingrese la nota 2 del alumno: ");
    scanf( "%d", &nota2 );

    promedio = (nota1 + nota2)/2;

    if ( promedio >= 6 ){
        printf(" Aprobado \n ");
        printf(" promedio: %f ", promedio);
    }else{
        printf(" Reprobado \n ");
        printf(" promedio: %f ", promedio);
    }
    
    return 0;
    
}
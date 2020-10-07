#include <stdio.h>
#define dimension 10

// 1er Paso Cabecera de la Funcion

void suma(int numeroA, int numeroB); 
int otraSuma(int numeroA, int numeroB);

int main(){
    int valorA = 300;
    int valorB = 10;
    int resultado;
    //llamada a la funcion
    //suma( valorA, valorB );

    resultado = otraSuma( valorA, valorB );

    printf( "Resultado: %d", resultado);
    
    return 0;
}

// Definicion de la funcion
void suma(int numeroA, int numeroB){

    int resultado = numeroA + numeroB;
    printf("Resultado %d", resultado);

}

int otraSuma(int numeroA, int numeroB){

    int resultado = numeroA + numeroB;
    return resultado;
}



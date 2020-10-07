#include <stdio.h>
#define dimension 10

int main(){

    int listaNumeros[dimension];
    int indice;
    for(indice=0; indice < dimension; indice++){
        printf( "Ingrese un valor para la posicion %d \n", indice);
        scanf( "%d", &listaNumeros[indice]);
        }

    for(indice=0; indice < dimension; indice++){
        printf( "listaNumeros - Poscion: %d - Valor: %d \n ", indice, listaNumeros[indice]);
    }

}
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int i;
int j;

void ordenar(int vec[SIZE]);
void mostrarListaNumeros(int v[SIZE]);


int main(){

    int listaNumeros[SIZE];

    for(i=0;i<SIZE;i++){

                    do{
                        system("cls");
                        printf("Ingrese un valor en la posicion %d: \n",i);
                        scanf("%d",&listaNumeros[i]);

                    }while(listaNumeros[i]<0 || listaNumeros[i]>10);

        }

    ordenar(listaNumeros);
    mostrarListaNumeros(listaNumeros);

    return 0;

}

void mostrarListaNumeros(int v[SIZE]){
//system("cls");
    for(i=0;i<SIZE;i++)
        {
            printf("La posicion %d tiene el valor %d \n",i,v[i]);
        }
}

void ordenar(int vec[SIZE]){
    int temp = 0;

    for (i=1;i<SIZE;i++)
{
       for (j=0; j < SIZE-i ;j++) // for(j=0; j < Nelementos-i; j++) es menor y no menor igual
       {
          if (vec[j] < vec[j+1])//Condicion mayor-menor
          {
            temp     = vec[j];
            vec[j]   = vec[j+1];
            vec[j+1] = temp;
          }
       }
}

}



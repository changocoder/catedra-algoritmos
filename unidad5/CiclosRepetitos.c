#include<stdio.h>
#define FILA_SIZE 2
#define COLUMNA_SIZE 2

void carga_array(int array[FILA_SIZE][COLUMNA_SIZE]){
    int i,j;
    for(i=0; i<FILA_SIZE;i++){
        printf("Fila %d ----------------\n", i);
        for (j = 0; j < COLUMNA_SIZE; j++)
        {
            printf("Ingrese datos de la matriz:");
            scanf("%d",&array[i][j]);
        }
    }
}

void mostrar_array(int array[FILA_SIZE][COLUMNA_SIZE]){
    int i,j;
    for(i=0; i<FILA_SIZE;i++){

        for (j = 0; j < COLUMNA_SIZE; j++)
        {
            printf("Fila %d = Columna %d: %d \n", i,j, array[i][j]);
        }
    }
}


float calcular_promedio(){
    printf("%d", FILA_SIZE);

}

int main(){
    int array[FILA_SIZE][COLUMNA_SIZE];
    
    carga_array(array);
    mostrar_array(array);

   return 0;
}

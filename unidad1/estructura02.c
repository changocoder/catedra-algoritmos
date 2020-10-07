#include <stdio.h>
#include <stdlib.h>
#define n 2

int i;

typedef struct{

char nombre[30];
char marca[30];
float precio;

}Productos;





int main(){
Productos listado[5];

for(i=0;i<n;i=i+1){




    printf("Ingrese el nombre del producto: ");
    fgets(listado[i].nombre,sizeof(listado),stdin);


    printf("Ingrese la marca del producto: ");
    fgets(listado[i].marca,sizeof(listado),stdin);

     printf("Ingrese el precio del producto: ");
    scanf("%f", &listado[i].precio);
    getchar();

}

for(i=0;i<n;i=i+1){

    printf("Nombre Producto %d: %s \n",i,listado[i].nombre);
    printf("Marca Producto %d: %s \n",i,listado[i].marca);
    printf("Precio producto %d: %2.f \n",i,listado[i].precio);


}




return 0;
}

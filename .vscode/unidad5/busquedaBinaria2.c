#include <stdio.h>
#define DIMENSION 12
int i;
int j;
int busquedaBinaria(int  vector[], int n, int dato) {
	   int centro,inf=0,sup=n-1;
	   while(inf<=sup){
	        centro=((sup-inf)/2)+inf;
	
			if(vector[centro]==dato)
				 return centro;
			else if(dato < vector[centro]) 
					 sup=centro-1;
			else
				inf=centro+1;
			}
	   return -1;
	} 

void mostrarListaNumeros(int v[DIMENSION]){
//system("cls");
    for(i=0;i<DIMENSION;i++)
        {
            printf("La posicion %d tiene el valor %d \n",i,v[i]);
        }
}
void ordenar(int vec[DIMENSION]){
    int temp = 0;

	for (i=1;i<DIMENSION;i++)
		{
	       for (j=0; j < DIMENSION-i ;j++) // for(j=0; j < Nelementos-i; j++) es menor y no menor igual
	          {
	            if (vec[j] > vec[j+1])//Condicion mayor-menor
		          {
		              temp     = vec[j];
		              vec[j]   = vec[j+1];
		              vec[j+1] = temp;
		         }
		      }
		}

	}

int ingresoDatoBuscado(){
	int dato;
	printf("Ingrese el dato a Buscar:");
	scanf("%d",&dato);

	return dato;
}

int main(){

	int array[] = {2,34,5,7,7,6,8,10,22,33,44,55};
	ordenar(array);
	mostrarListaNumeros(array);
	int dato = ingresoDatoBuscado();
	
	if( busquedaBinaria( array, DIMENSION, dato) != -1)
		printf(" Se encontro el dato buscado en la posicion -%d- ", busquedaBinaria( array, DIMENSION, dato) );
	else
		printf("El dato buscado nose encontro");





	return 0;



	
}

#include <stdio.h>
#define DIMENSION 12
int i;
int j;

int busquedaBinaria(int  vector[], int dato) {
	   int centro;
	   int inf=0;
	   int sup=DIMENSION-1;

	   while( inf <= sup ){
	        centro=((sup-inf)/2)+inf;
			if(vector[centro] == dato)
				 return centro;
			else if(dato < vector[centro]) 
					 sup=centro-1;
			else
				inf=centro+1;
			}
	   return -1;
	} 

int busquedaSecuencial( int vector[], int datoBuscado){

	for( i=0 ; i < DIMENSION; i++){
		
		if( vector[i] == datoBuscado)
			return i;

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
	int valorBuscado;
	printf("Ingrese el dato a Buscar:");
	scanf("%d",&valorBuscado);

	return valorBuscado;
}

int main(){

	int array[] = {2,34,5,7,7,6,8,10,22,33,44,55};
	ordenar(array);
	mostrarListaNumeros(array);
	int dato = ingresoDatoBuscado();
	int resultado =	busquedaBinaria( array, dato );

	if(resultado != -1)
		printf(" Se encontro el dato buscado en la posicion -%d- ",resultado );
	else
		printf("El dato buscado nose encontro");


	return 0;



	
}

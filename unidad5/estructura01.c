#include<stdio.h>
#define DIMENSION 10

typedef struct{
        ///tipo de dato - nombre
        int edad;
        int documento;
        char nombre;
        int matricula;
}Alumno;



int main(){
///Declaracion de una variable Estructura
Alumno var1;
Alumno listadoAlumnos[DIMENSION];


///asiganacion
var1.edad = 10;
var1.documento= 12345678;
var1.nombre = 'a';
var1.matricula = 123;

printf("%d anios",var1.matricula);



return 0;
}

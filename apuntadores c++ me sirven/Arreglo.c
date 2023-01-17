#include<stdio.h>


void contestar(char *nombre)
{
    printf("Me alegro de conocerte %s \n", nombre);
    
    
}

int main()
{
    char nombree[20];//el arreglo ya es una direccion de memoria por definicion, no necesita el operador &
    printf("Hola yo soy el compilador de C, cual es tu nombre? \n");
    scanf("%s",nombree);//tu lo vas a escribir en el array de 20 espacios
    
    contestar(nombree);//mandas a llamar la funcion co el nombre de la funcion per entre parentesis con el nombre de array de esta funcion
}

//nota, no el programa no toma en cueta los espacion por el sacnf, tendria que ser gets




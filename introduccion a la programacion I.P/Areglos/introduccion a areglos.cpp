//Areglos:Es un conjunto de epacios en la memoria q se identifican por un mismo nombte pero por diferente indice o posicion.
// En un areglo todos los valores son del mismo tipo de dato.

#include<stdio.h>
int main(){
int arreglo[10];                                                                          //En los corchetes ingresamos el numero de elementos

printf("Programa que muestra el numero  que ingrese el usuario en la posicion 0.\n");     //Titulo del programa.
printf("\nIngrese un numero: ");                                                          //Letrero que se imprimira en pantalla.
scanf("%d",&arreglo[0]);                                                                  //Variable guardada en "sacanf"
	
printf("\nEl numero en el areglo de particion cero es: %d",arreglo[0]);                   //Se manda a llamar la variable guardada para q aparesca en pantalla.

fflush(stdin);                                                                           
getchar();
	
	
	
}

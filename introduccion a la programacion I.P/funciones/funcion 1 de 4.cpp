// Funciones con retorno y con parametros (DIVIDE Y COMQUISTA).
#include<stdio.h>

int suma(int x, int y)//parametros

{
	int suma=0; //nueva variable
	suma=x+y;                                              //Este tipo de funcion se caracteriza por que la suma
	return suma; // retorna la variable llamada suma       // se hace en la fucion que le dimos el nombre "suma", mas no en la funcion main.
}

int main(){
	int a, b;   //Declaracion de nuevas variables.
	printf("\t programa que me suma dos numeros cualesquiera\n");
	printf("\n inserta un numero: ");                                   
	scanf("%d",&a);
	
	printf("\n inserta otro numero: ");
	scanf("%d",&b);
	
	printf("\n La suma es: %d",suma(a,b));
	
	fflush(stdin);
	getchar();
}

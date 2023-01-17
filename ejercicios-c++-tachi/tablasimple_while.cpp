#include<stdio.h>

int main(){
	int numero;
	int contador=1;
	int  acumulador1=0;
	int acumulador2=0;
	
	printf("ingrese el numero de la tabla: ");
	scanf("%d",&numero);
	
	while(contador<=10){
		acumulador1 = acumulador1+1;
		acumulador2 = numero*acumulador1;
		printf("%d x %d = %d",numero,acumulador1,acumulador2);
		printf("\n");
		contador++;  //equivalente a las siguientes expresiones:   contador=contador+1;    contador+=1;	
	}


} 

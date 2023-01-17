//programa que suma la cantidad de numeros hasta un numero especificado
#include<stdio.h>

int main(){
	
	int x,num;
	int suma=0;
	int contador=1;
	
	printf("Inrese  cantidad  de numeros: ");
	scanf("%d",&x);
	
	
	while(contador<=x){
		printf("\nnumero a sumar: ");
		scanf("%d",&num);
		
		suma= suma + num;
		contador++;
	}
	
	printf("\nLa suma total es %d",suma);
}

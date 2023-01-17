//ejercio basico 2 for
//programa que suma la cantidad de numeros hasta un numero especificado
#include<stdio.h>

int i,num,x;
int suma=0;
int main(){
	
	
	printf("Inrese  cantidad  de numeros: ");
	scanf("%d",&x);
	
	for(i=1; i<=5; i++){
		printf("\nnumero a sumar: ");
		scanf("%d",&num);
		
		suma= suma + num;
		
	}
	
	printf("\nLa suma total es %d",suma);
	
	
}

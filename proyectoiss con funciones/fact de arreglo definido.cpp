//prueba basura  sacar el vactorial de numeros en un array
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(){
	
int v[]={2,3,4,7};
int i;
int aux;
printf("mostrando el vctor\n\n");


for(i=0; i<4;i++){
	
	printf("[%d] ",v[i]);
}	
printf("Sacando el facrorial de cada elemento del vector\n\n");


for(i=0; i<4;i++){
	
	
	aux=v[i];
    for(int j=aux-1; j>0;j--){	
    	aux= aux*j;
	}	
	
	printf("El factorial de v[%d] = %d \n",v[i],aux);	
		
	}
	


	
}

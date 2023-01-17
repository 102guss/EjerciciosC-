//prueba basura  sacar el vactorial de numeros pares en un array 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(){
	
int v[]={2,3,6,7};
int i;
int aux;
int j=0;
printf("mostrando el vctor\n\n");


for(i=0; i<4;i++){
	
	printf("[%d] ",v[i]);  //hasta aqui mestra el vector solito
}	


printf("\nSacando el facrorial de los numeros pares de cada elemento del vector\n\n");



for(i=0; i<4;i++){ //recorre cada elemento del vector
	
	if( v[i] %2 == 0  ){//hasta aqui me esta seleccionando los pares
		
		aux=v[i];     //en cada iteracion asigna el elemento a un auxiliar(en cada iteracion se vuelve a reinicial el aux)
	
    for( j=aux-1; j>0;j--){	
    	aux= aux*j;              //aqui le saca el factorial a los pares 
	}	//fin del segundo for
	
		printf("El factoriaal de v[%d] = %d \n",v[i],aux); //se muestra cada elemeto con su respectivo factorial acumulado en aux
		
	} // fin del if



	}  //fin del primer for

}

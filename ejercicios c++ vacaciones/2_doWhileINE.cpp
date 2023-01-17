#include<stdio.h>

int main(){
int contador=1;	
int edad, edad2;

do{
	 printf("\nIngresa tu edad: ");
     scanf("%d",&edad);

    if(edad>0 && edad <18){
    	printf("no puedes tramitar tu INE");
	}
	
	
	else if (edad<=0){
    	printf("edad no valida, sigue intentando");
	}
	else{
		printf("ya puedes tramitar tu INE");
	}
	
	
}while(edad<=0);


	
	
}// fin del main
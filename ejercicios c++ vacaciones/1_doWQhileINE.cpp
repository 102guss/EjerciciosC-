
#include<stdio.h>

int main(){
int edad;

do{

     printf("\nIngresa tu edad: ");
     scanf("%d",&edad);

     if (edad<=0){
	 printf("\nEdad invalida vuelva a intentar: ");
    }
    else if (edad>=18){
	 printf("\nFelicidades: puedes tramitar tu INE ");
    }
    else{
    	printf("\nLo siento, aun no puedes tramitar tu INE");
	}
    
   
   } while( edad <= 0);
   
}//fin del metodo main
	
	               
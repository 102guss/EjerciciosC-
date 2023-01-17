#include<stdio.h>

int main(){
int contador=1;	
int edad, edad2;
printf("\nIngresa tu edad: ");	
scanf("%d",&edad);

if (edad<=0){
	printf("Edad no valida, vuelva  aintentarlo");
while(edad2 <=0 && contador <=2){
	printf("\nIngresa tu edad: ");	
    scanf("%d",&edad2);
    if (edad2 <=0){
    	    
    	    if(contador ==2)
    	    printf("\nSe te acabaron los intentos");
    	    else{
    	    	printf("Edad no valida, vuelva  aintentarlo");
			}
	}
	else if (edad2>=18){
		printf("\nYa puedes tramitar tu INE");
	}
	else{
		printf("\nNo puedes tramitar tu INE");
	}
    
    contador=contador+1;
    }//fin del while
}

else if (edad >= 18){
	printf("\nYa puedes tramitar tu INE");
}

else{
	printf("Ya puedes tramitar tu INE");
}
}
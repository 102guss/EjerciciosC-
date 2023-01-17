//progrma definitivo del proyevto IIS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>




void pares(  ); 
int main(){
int tamano=0;
int i;
int *apuntador1;
int *apuntador2;
int *apuntador3;
int factorial;
int x=0;
int y=0;
int num, num2;
int fa=1;
int aux;



printf("Ingrese el tamanio del vector: ");
scanf("%d",&tamano);
int vector1[tamano];

srand(time(NULL));



for(i=0; i<tamano;i++){//para generar los numeros aleatoreos de 0 hasta el 20 con la longitud especificada
	
	vector1[i]=  0+rand()%(20+1);printf("[%d] ",vector1[i]);
	
	
	

}
//...........................................................................Hasta aqui termina el punto numero 1  
 pares(  ); 

}

void pares(  )  {
	int tamano=0;
int i;
int *apuntador1;
int *apuntador2;
int *apuntador3;
int factorial;
int x=0;
int y=0;
int num, num2;
int fa=1;
int aux;
int vector1[tamano];


		for(i=0; i<tamano;i++)
	{                          //recorre el mismo vector pero solo me muestra cuantos pares hay
	    if (vector1[i]%2==0)
		{
				 x=x+1;  	
     	}
     	      	
    }
  
    
printf("\nLa cantidad de numeros pares del vector original son: ");//(indica cuantos pares hay)..punto dos
 printf("%d. ",x);
 
 
}


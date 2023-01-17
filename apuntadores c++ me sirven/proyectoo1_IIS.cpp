#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>



int main(){
int tamano=0;
int i;
int *apuntador1;
int *apuntador2;
int *apuntador3;
int *apuntador4;
int factorial;
int x=0;
int y=0;
int num, num2;
int fa=1;
int aux;
float aux2; 
int k;


printf("Ingrese el tamanio del vector: ");
scanf("%d",&tamano);
int vector1[tamano];

srand(time(NULL));



for(i=0; i<tamano;i++){//para generar los numeros aleatoreos de 0 hasta el 20 con la longitud especificada
	
	vector1[i]=  0+rand()%(20+1);printf("[%d] ",vector1[i]);
	

}
//...........................................................................Hasta aqui termina el punto numero 1  

	printf("\n");
	for(i=0; i<tamano;i++)
	{                          //recorre el mismo vector pero solo me muestra cuantos pares hay
	    if (vector1[i]%2==0)
		{
				 x=x+1;  	
     	}
     	      	
    }
  
    
printf("\nLa cantidad de numeros pares del vector original son: ");//(indica cuantos pares hay)..punto dos
 printf("%d. ",x);
 
 
 //................................................................................................................................................................
 apuntador1= (int *)malloc(tamano*sizeof(int));//me aparta la misma cantodad de memoria que el arreglo original
 
 for(i=0; i<tamano;i++){
 	
 	apuntador1[i] = vector1[i];                   //aqui me copia cada elemento del vector original al segundo vector que acabo de crear con memoria dinámica.
              
 }
 //........................................................................................................punto numero 3
 	printf("\n\n");
	printf("Los numeros pares en el segundo vector son: \n");
	for(i=0; i<tamano;i++)
	{                          //recorre el mismo vector pero solo me muestra los pares
	    if (apuntador1[i]%2==0)
		{
			
		    printf("[%d], ",apuntador1[i]);
		   
		   	
     	}
     	      	
    }
    //..........................................................................................................................
 //aqui va el punto numero 4
 
 	printf("\n");
	for(i=0; i<tamano;i++)
	{                          //recorre el mismo vector pero solo me muestra cuantos impares hay
	    if (vector1[i]%2==!0)
		{
				 y=y+1;  	
     	}
     	      	
    }
    printf("\nLa cantidad de numeros impares en el vector original son: ");//(indica cuantos impares hay)..punto dos
 printf("%d. ",y);
 //nota, en este caso reutilice el mismo codigo de los pares pero con otra variable para que no se revuelva
 
 
 
 
 //...............................................................................................................................punto numero 5
 
apuntador2 = (int *)malloc(tamano*sizeof(int));   //se reserva memoria dinamica del tamaño del vector original

 for(i=0; i<tamano;i++){
 	
 	apuntador2[i] = vector1[i];                   //aqui me copia cada elemento del vector original al tercer vector que acabo de crear con memoria dinámica.	
 }
 
 //En la siguiente instruccion usaremos los datos del vector original para indicar el numero de elementos impares(podemos usar una funcion para realizar esto)
 
    	printf("\n");
    	
    	printf("\nElementos impares del vector original\n");
	for(i=0; i<tamano;i++)
	{                          //recorre el  vector original y te muestra los elementos impares que hay
	    if (vector1[i]%2==!0)
		{
				  	
				  	printf("%[%d], ",vector1[i]);
     	}
     	      	
    }
  //..........................................................................................................................punto numero 6
/*Mostrar un cuarto vector en el que cada elemento sea el elemento del vector de pares pero que sea
el factorial de cada numero.*/
printf("\n\nMostrando el factorial de los numeros pares\n");

apuntador3 = (int *)malloc(tamano*sizeof(int)); //reserva espacio de longitud q ingresa el usuario y es apuntada por un cuarto apuntador

 for(i=0; i<tamano;i++){
 	
 	apuntador3[i] = apuntador1[i];   //asigna cada elemento del vector dos al vector 4               	
 }
 
 
 for(i=0; i<tamano;i++){   //recorre cada elemento del vector
 	
 	if( apuntador3[i] %2 ==0   ){ //hsata aqui seleccionamos los pares
	 
	 aux = apuntador3[i];        //en cada iteracion asigna el elemento a un auxiliar
	 
	 for(int j= aux-1; j>0; j--  ){
	 	
	 	aux = aux*j;             //formula para sacar el factorial(le saca el factorial a los pares)
	 }
	 
	 printf("[%d]", aux); //se muestra cada elemento con su respectivo factorial acumulado en uax
	 
	 }
	 	
 }
 printf("\n\nEste es el vector de numeros imapres divididos entre 3.3\n");
 
 apuntador4 = (int *)malloc(tamano*sizeof(int));
 
 
 for(i=0; i<tamano;i++){
 	
 	apuntador4[i] = vector1[i];               	
 }
 

for(i=0; i<tamano;i++)
	{                          //recorre el  vector original y te muestra los elementos impares que hay
	    if (apuntador4[i]%2==!0)
		{
			for(k=0; k<tamano;k++)	 {
				
				aux2= apuntador4[i]/3.3;
				
			} 	
				printf("%.3f ", aux2);  	
     	}
     	      	
    }
    
    
     
 
    
}

/*Construya una función que reciba un array de números ENTEROS y devuelva el 
máximo y la posición que ocupa*/    //por valor(nos se puede), afuerzas tengo que pasarlo como referencia y en java ya se consideran objetos
#include<stdio.h>

void  maximovalor(int *);
int *cambiodeElementos(int *vectorOriginal);



int main(){
	int i;
	int arreglo[]={1,2,3,4,5};
	
	 maximovalor(arreglo);      //no se pone amperson ya que es un arreglo
	 
	 	printf("\nLos numeros del vector original son \n");
	 	
	 for(i=0; i<5; i++){
	 
	 printf("[%d], ", arreglo[i]);
	 }
	 
	 	printf("\nLos numeros del vector modificado son \n");
	 	
	   cambiodeElementos(arreglo);
	   
	    for(i=0; i<5; i++){
	 
	 printf("[%d], ", arreglo[i]);
	 }
	 
	 printf("\n");
	 
	 maximovalor(arreglo);     //ahora será el maximo valor pero de los elementos del arreglo modificado directamente por punteros, reutilizando la misma funcion realizada anteriormente.
	 
	 
	 
}// fin funcion main........................................................................................................................


void  maximovalor(int *arreglo){  //recibe la referncia de un vector
	
	int mayor =0;                                                //estamos suponiendo que el cero es nuestro mayor elemento hasta ahora
	int i;
	for (i=0; i< 5; i++){
		
   //printf("\nDijite el  numero %d:  ",i+1);
 //scanf("%d",&arreglo[i]);
		
		if(  arreglo[i] > mayor ){          //aqui ya estamos tomando a la variable como un vector
			
			mayor= arreglo[i];
			
		}
		
	}
	printf("\nEl numero mayor del vector es : %d", mayor );
	
}//fin funcion uno...........................................................................................................................


//ahora una funcion que cambie los elemento del vector original por otros, multiplicandolos por dos y luego mandamos a llamar a la funcion mayor, pero ya con los nuevos.


int *cambiodeElementos(int *vectorOriginal){
	
	int i;

	
	 for(i=0; i<5; i++){
	 vectorOriginal[i]=vectorOriginal[i]*2;       //los elementos del vector original, multiplicado por dos.
	
	 }
	
	return vectorOriginal;
}//fin funcion 2..............................................................................................................................





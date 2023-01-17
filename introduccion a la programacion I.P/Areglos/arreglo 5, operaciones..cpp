//Operaciones con arreglos numericos.
#include<stdio.h>
int main(){
float arreglo_1[]={ 3.8, 2.3, 4.5,18};                              //Lo inicializamos de manera estandar. 77El areglo està compuesto de cuatro posiciones.	
float arreglo_2[4];	                                               //Declaramos nuevo arreglo con cuatro posociones.
float arreglo_3[4];                                                 //Declaramos un tercer arreglo con cuatro posociones.	
printf("\tPrograma que suma una serie de numeros ingresados con otros\n");                                
 for(int i=0; i<4; i++){                                           //Creamos un ciclo repetitivo de el numero de veces q se repetira el numero ingresado.
 
printf("\ninserte numero: ");                                         //Se despliega un letrero en pantalla.
 scanf("%f",&arreglo_2[i]);                                        //se guardarà en el arreglo 2, en la posocion "i".

                                                                
} 

	for(int i=0; i<4; i++){                                         //Repetimos el ciclo una vez mas.
	
	arreglo_3[i]=arreglo_1[i]+arreglo_2[i];                       //sumaremaremos el arreglo 1 con el arreglo 2 para guardarlo en el arreglo 3	
	printf("\nLa suma de %.2f+%.2f es: %.2f\n", arreglo_1[i],arreglo_2[i], arreglo_3[i] );
	}

	fflush(stdin);
	getchar();
}

//Segundo ejemplo de areglos usando un ciclo repetitivo.
#include<stdio.h>
int main(){                                                                                       //abrimos el cueropo de la funcion main con un coechete.
	
int arreglo[5];	                                                                                 //Adentro del cuadro indicamos el numero de elementos que abra.
printf("Programa que indica la posicion en la cual se encientra ubicado el numero\n");           //Titulo del programa.
	
for (int i=0; i<5;i++){                                                                    //La variable "i", se repedira cinco veces incrementando de uno en uno
printf("\nEscribe el numero: ");                                                           //Imprimimos un letrero.
scanf("%d",&arreglo[i]);                                                                   //El letrero se guardara en la funcion areglo con variable"i".
	             
}	                                                                                       //abrimos el cuerpo de el ciclo repetitivo.
 
for(int i=0; i<5;i++){                                                                     //Nuevamente se repetira el mismo ciclo.
	
printf("\nposicion %d numero%d\n", i,arreglo[i] );                                         //para mostrar en pantalla los datos guardados.
}                                                                                          //Se cierra el cuerpo de el ciclo repetitivo.
 
                                                                                            
fflush(stdin);
getchar();
}                                                                                           //Se cierra el cuerpo de toda la funcion.

#include<stdio.h>
//Pograma que maneja un arreglo unidimensional
main(){ //inicia la funcion main.

int i;
float datos[5];
//captura de la matriz
printf("ESCRIBA LOS VALORES DE LA MATRIZ\n");
for(i=0;i<5;i++)
scanf("%f",&datos[i]); 
//impresion de la matriz}
printf("Los valores de la matriz son:\n");
i=0;
while(i<5){
	printf("%f\n",datos[i]);
	i++;}
	
fflush(stdin);
getchar();


}

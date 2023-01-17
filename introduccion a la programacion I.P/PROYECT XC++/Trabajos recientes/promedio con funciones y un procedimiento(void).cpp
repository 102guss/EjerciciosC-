#include<stdio.h>


float Promedio ( float C1, float C2, float C3, float C4, float C5){
	
	
	return (( C1+C2+C3+C4+C5)/5);
}

void Titulo(){

printf("\n Programa que calcula el promedio de cinco calificaciones\n");
}

main (){


float cal1,cal2,cal3,cal4,cal5,prom;
Titulo ();


printf("\nDame la primer calificacion: ");
scanf("%f",&cal1);

 printf("\nDame la segunda calificacion: ");
 scanf("%f",&cal2);
 
  printf("\nDame la tercera calificacion: ");
 scanf("%f",&cal3);
 
 printf("\nDame la cuarta calificacion: ");
 scanf("%f",&cal4);
 
  printf("\nDame la quinta calificacion: ");
 scanf("%f",&cal5);
 
 
 prom=Promedio(cal1,cal2,cal3,cal4,cal5);
 
   printf("\nEl promedio es: %.1f ",prom);
 



fflush(stdin);
getchar();
	
}

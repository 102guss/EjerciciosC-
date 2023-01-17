//Calificaciones con punto decimal (Tipo flotante) sin contador.
#include <stdio.h>
 main(){

float calificacion1,calificacion2,calificacion3,calificacion4,calificacion5, promedio;

printf("\nIngresa la premer calificacion: ");
scanf("%f",&calificacion1); 
 
 printf("\nIngresa la segunda calificacion: ");
scanf("%f",&calificacion2); 
 
  printf("\nIngresa la Tercer calificacion: ");
scanf("%f",&calificacion3); 

  printf("\nIngresa la Cuarta calificacion: ");
scanf("%f",&calificacion4); 

  printf("\nIngresa la quinta calificacion: ");
scanf("%f",&calificacion5); 

  promedio=(calificacion1+calificacion2+calificacion3+calificacion4+calificacion5)/5;
  
  printf("\nLa calificacion final es: %.1f", promedio);

 
 fflush(stdin);
 getchar();
 }

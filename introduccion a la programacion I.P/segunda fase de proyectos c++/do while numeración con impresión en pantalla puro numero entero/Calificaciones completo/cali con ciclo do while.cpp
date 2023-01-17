//Calificaciones con punto decimal y ciclo repetitivo (do while).
#include <stdio.h>
  main(){

 float  calificaciones,promedio;
 int    contador;
 int suma=0;
 
 
 contador=1;
 do{
 	printf("\nIngresa la calificacion: ",contador);
 	scanf("%f",&calificaciones);
 	
 
 	contador++;
 	
 		  	suma+=calificaciones;// el operador mas "+" hace q se vaya sumando cada calificacion.
 		  	
   }while(contador<=5);

     promedio=suma/5;
   
     printf("\n El promedio final es: %.1f",promedio);
  
  fflush(stdin);
  getchar();
  }

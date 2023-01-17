//Calificaciones con punto decimal y ciclo repetitivo (for). y con numeracion
#include <stdio.h>
  main(){

          float  calificaciones,promedio;
              int    contador; //contador siempre es de tipo entero.
               int suma=0;
 
              for(contador=1; contador<=5; contador++ ){
              	   
               printf("\nEscriba la calificacion %d: ",contador);
               scanf("%f",&calificaciones);
               
               suma+=calificaciones;
			   }
			   
			   
			   promedio=suma/5;
			
               printf("\n El promedio final es: %.1f",promedio);
  
       fflush(stdin);
       getchar();
   }

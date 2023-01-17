						  #include <stdio.h>

int main()
{
   int contador,calificaion;



   contador = 1; /* Inicialización del contador */
   do
   {  
     
      printf( "\ningresa la calificacion\t%d: ", contador );   /* Salida */ 
	 scanf("%d",&calificaion);
	       
      contador++;                 /* Incremento */
      
   } while ( contador <21);     /* Condición */
		
				  
   fflush(stdin);
   getchar();
}        

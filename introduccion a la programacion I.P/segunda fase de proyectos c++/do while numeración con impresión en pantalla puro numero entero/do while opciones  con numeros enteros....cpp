						  #include <stdio.h>

int main()
{
   int contador,calificaion;



   contador = 1; /* Inicializaci�n del contador */
   do
   {  
     
      printf( "\ningresa la calificacion\t%d: ", contador );   /* Salida */ 
	 scanf("%d",&calificaion);
	       
      contador++;                 /* Incremento */
      
   } while ( contador <21);     /* Condici�n */
		
				  
   fflush(stdin);
   getchar();
}        

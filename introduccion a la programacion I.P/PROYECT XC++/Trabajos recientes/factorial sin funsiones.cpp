// calcular el factorial de un  numero con funciones.
# include <stdio.h>
#include<math.h>
 
main ()
 
{
    int n,f,c;
     
     
     
    printf("programa que calcula el factorial de un numero\n");   
         
    printf("\n Ingresa el numero: ");
    scanf("%d",&n);
    f=1;
    for(c=1;c<=n;c++){
        f=f*c;
    }
    printf("\nEl factorial es: % d",f);
 
    
   fflush(stdin);
   getchar();
     
      
}


# include <stdio.h>
#include<math.h>

main ()

{
	int n,f,c,e,total;
	
	
	
	printf("programa que calcula el factorial de un numero y lo eleva a una potencia\n");	
		
	printf("\n Ingresa el numero: ");
	scanf("%d",&n);
	f=1;
	for(c=1;c<=n;c++){
		f=f*c;
	}
	printf(" El factorial es: % d",f);

	printf("\n\nIngresa el  exponente: ");
	scanf("%d" ,& e);
	

total=pow( n, e );
printf ("el resultado es: %d",total);
   
  
	 	
	 	

   fflush(stdin);
   getchar();
	
	 
}
	 






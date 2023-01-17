#include<stdio.h>
#include <math.h>
int a,b,h;
main()

{
	printf("\t\t calcular la hipotenusa de un tiangulo: ");
	
	printf("\n\n\n ingrese el cateto anyacente del triangulo:");
		scanf("%d",&a);
		
	printf("\n\n ingrese el cateto opuesto del triangulo:");
	scanf("%d",&b);
	
	h=sqrt(a*a + b*b);
	
	printf("\n\n la hiponetusa del triangulo es: %d ",h);
	scanf("%d",&h);
	
	fflush(stdin);
	getchar();
	
  }
  

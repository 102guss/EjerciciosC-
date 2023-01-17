#include<stdio.h>

main()
{
float x,d,a,d2,d3,d4,d5,d6,p,p2;
char  gasolina;
printf("que tipo de gasolina quiere comprar");


printf("\n 1-Magna.\n 2-Premium.\n");
scanf("%f",& gasolina);

 switch (gasolina)
{
case 1:
	printf("\n su precio es de $13.57 por litro\n");
	
	printf("\nEscriba la cantidad de litros que desea comprar");	
    scanf("%f",& x);
    
    p=(x*13.57);
    	printf("\nEl precio a pagar es de: $",p);
        
	if (0<x<=20)
	printf("\nEl descuento es del 12%");
	d=(p*12/100);
	
	printf("\nEl total a pagar es de: $",d);
   

    if (20<x<=35)
    printf("\nEl descuento es del 20%");
    d2=(p*20/100);
	printf("\nEl total a pagar es de: $",d2);

if (x>36)
printf("\nEl descuento es del 24%");
d3=(p*24/100);
printf("\nEl total a pagar es de: $",d3);

 break;


case 2:
printf("\n su precio es de $7.38 por litro");

printf("\nEscriba la cantidad de litros que desea comprar");	
scanf("%f",& a);

p2=(a*7.38);
printf("\nEl precio a pagar es de: $",p2);
        
if (0<x<=20)
printf("\nEl descuento es del 10%");
	
d4=(p*10/100);
	
printf("\nEl total a pagar es de: $",d4);

if (20<x<=35)
printf("\nEl descuento es del 18%");
d5=(p*18/100);
printf("\nEl total a pagar es de: $",d5);

if (x>36)
printf("\nEl descuento es del 23%");
d6=(p2*23/100);
printf("\nEl total a pagar es de: $",d6);

break;
	
default:
printf("\n opcion invalida");
		
}
fflush(stdin);
getchar();
		
}

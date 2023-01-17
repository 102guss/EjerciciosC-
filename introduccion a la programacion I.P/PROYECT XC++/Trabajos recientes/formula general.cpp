#include<stdio.h>
#include<math.h>
main()
{
float x1,x2;	
int a,b,c;
printf("\nPrograma que calcula los coeficientes de una \necuacion, por medio de la formula general.\n");
printf("\nintrodusca el valor del coeficiente a: ");
scanf("%d",&a);

printf("\nintrodusca el valor del coeficiente b: ");
scanf("%d",&b);

printf("\nintrodusca el valor del coeficiente c: ");
scanf("%d",&c);


x1=(-b+(sqrt(b*b-4*a*c)))/(2*a); 

x2=(-b-(sqrt(b*b-4*a*c)))/(2*a); 


printf("\nx1 vale: %.1f",x1);
printf("\n\nx2 vale: %.1f",x2);

fflush(stdin);
getchar();
}

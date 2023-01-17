#include<stdio.h>
#include<math.h>

int Formulageneral(int a, int b, int c)
{
return ( (-b+(sqrt(b*b-4*a*c)))/(2*a) );
 
}
 
 
int Formulageneral_2(int a, int b, int c)
{
return ( (-b-(sqrt(b*b-4*a*c)))/(2*a) );
 
}
 
main()
{
   
int x,y,z,formulita,x1;
printf("\nPrograma que calcula los coeficientes de una \necuacion, por medio de la formula general.\n");
printf("\nintrodusca el valor del coeficiente a: ");
scanf("%d",&x);
 
printf("\nintrodusca el valor del coeficiente b: ");
scanf("%d",&y);
 
printf("\nintrodusca el valor del coeficiente c: ");
scanf("%d",&z);

formulita=Formulageneral(x,y,z);
 
printf("\nx1 vale: %.d",formulita);


formulita=Formulageneral_2(x,y,z);
printf("\nx2 vale: %.d",formulita);





fflush(stdin);
getchar();
}

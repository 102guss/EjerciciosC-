#include<stdio.h>
int b,h,p,a;
main()
{
	printf("\n\nCalcular el area y perimetro de un rectangulo: ");
	printf("\n\nDame la base del triangulo:");
	scanf("%d",&b);
	printf("\n\nDame la altura del triangulo:");
	scanf("%d",&h);
	p=(2*b)+(2*h);
	a=(b*h) ;
	printf("\n\nEl perimetro es: %d y el area es: %d ",p,a);
	getchar();
}

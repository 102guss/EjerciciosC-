#include<stdio.h>
int a,b,c,d,e,p;
main()
{
	printf("Promedio de 5 calificaciones:\n\n");
	
	printf("escribre la 1er calificacion: ");
	scanf("%d",& a);
	printf("escribre la 2da calificacion: ");
	scanf("%d",& b);
	printf("escribre la 3er calificacion: ");
	scanf("%d",& c);
	printf("escribre la 4ta calificacion: ");
	scanf("%d",& d);
	printf("escribre la 5ta calificacion: ");
	scanf("%d",& e);
	p=(a+b+c+d+e)/5;
	printf("\nEl promedio es: %d",p);
}

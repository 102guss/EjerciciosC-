#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int i,*A,n,B[4]={1,2,3,4};
	
	printf("\nLa direccion de A es: %p",&A);
	printf("\nLa direccion de i es: %p",&i);
	printf("\nLa direccion de n es: %p",&n);
	printf("\nLa direccion de B es: %p",&B);
	printf("\nEl tamaño de A es: %d",sizeof(A));
	printf("\nEl tamaño de i es: %d",sizeof(i));
	printf("\nEl tamaño de n es: %d",sizeof(n));
	printf("\nEl tamaño de B es: %d",sizeof(B));
	printf("\nIngresa un numero entero: ");
	scanf("%d",&n);
	/* TODO (#1#): 
	               
	               
	               
	               
	                */
	A = &n;
	printf("\nEl contenido de n es: %d",n);
	printf("\nEl contenido de A es: %p",A);
	printf("\nEl contenido de n es: %d",*A);
	printf("\nEl contenido de B es: %p",B);
	
	A = B; 
	printf("\nEl contenido de B[1]= %d ",B[1]);
	printf("\nEl contenido de B[1]= %d ",*(A+1));
	
	
	
	return 0;
}
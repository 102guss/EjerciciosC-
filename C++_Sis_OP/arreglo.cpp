#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 

{
	int i,*A,n,B[4]={1,2,3,4};
	
	printf("\nLa direccion de A es: %p",&A);
	printf("\nLa direccion de i es: %p",&i);
	printf("\nLa direccion de n es: %p:-->N",&n);
	printf("\nLa direccion de B es: %p: -->*",&B);
	printf("\nEl tamaño de A es: %d",sizeof(A));
	printf("\nEl tamaño de i es: %d",sizeof(i));
	printf("\nEl tamaño de n es: %d",sizeof(n));
	printf("\nEl tamaño de B es: %d",sizeof(B));
	printf("\nIngresa un numero entero: ");
	scanf("%d",&n);
	A = &n; //A --> apunta a n
	//aquí vamos a hacer una pasusa para saber si es por valor o por referencia
	
	printf("\nEl contenido de n es: %d",n);
	printf("\nEl contenido de A es: %p: -->N La # de memoria de n",A);
	printf("\nEl contenido de A es: %d: lo que tene n",*A);
		printf("\nmodificaremos el contenico de n mediante A");
		*A=2*n; //multiplicaremosa el contenido actual por "dos"
		printf("\nEl nuevo contenido de n es: %d ..1era forma",n);
	
	printf("\nEl contenido de n es: %d ..2da forma",*A); //A tiene el valor de lo que tenía n
	printf("\nEl contenido de B es: %p:-->*",B);//mas bien es la direccion de memoria de 2B" q es la misma q la del primer elemento del arreglo
	
	A = B; //A está apuntando al arreglo ediante su definición del mismo
	printf("\nEl contenido de B[0]= %d ",B[0]);
	printf("\nELa # de memoria de B[0]= %p:-->* ",&B); //la misma que la definición del array
	
	printf("\nEl contenido de B[0]= %d ",*(A+0));//von notación de apuntadores
		printf("\nELa # de memoria de B[0]= %p:-->* ..lo q contiene A ",A); //la misma que la definición del array
		printf("\nELa # de memoria de A= %p: ",&A); //la misma que la definición del array
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int n,i;
	int *ap;
	char *ap1;
	printf("Ingresa un numero entero: ");
	scanf("%d",&n);
	printf("\nEl contenido de n es: %d",n);
	printf("\nLa direccion de n: %p -->#n",&n);
	printf("\nLa direccion de i: %p -->#i",&i);
	ap = &n;
	printf("\nEl contenido de ap es: -->#n %p",ap);
	printf("\nLa direccion de ap es: %p -->#ap",&ap);
	printf("\nLa direccion de ap1 es: %p -->#ap1",&ap1);
	printf("\nEl tamano de int es: %d bytes",sizeof(int));
	*ap=9; //al modificar el valor de "ap", estamos modificando el valor de "n"
	printf("\nEl contenido de n es: %d ..val_modificado",n);
	printf("\nEl contenido de n es: %d ...el mismo_2daForma",*ap);//desde el punto de vista del apuntador
	printf("\nEl tamano de *ap es: %d bytes",sizeof(ap));
	printf("\nEl tamano de *ap1 es: %d bytes",sizeof(ap1)); //un apuntador es igual a 8 bytes
	ap=ap+2;
	printf("\nEl contenido de ap es: %p -->#int",ap);//me está dando la dirección del entero
	do
	{
		printf("\nCuantos numeros vas a ingresar: ");
		scanf("%d",&n);//la cantidad de espacios dinámicos que se apartaran
		
	}while(n<1);
	ap=(int *)malloc(sizeof(int)*n); //este apuntador está apuntando a un arreglo
	for(i=0; i<n ; i++)
	{
		printf("\nIngresa numero %d: ",i+1);
		scanf("%d",&ap[i]);//aquí está apuntando a cada una de las casillsa del array dinámico
	}
	for(i=0; i<n ; i++)
	{
		printf("Dato ap[%d]: %d,  ",i,ap[i]); //aquí vuelve a apuntan mara mandar a imprimir
	
	}
	return 0;
}
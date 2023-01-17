#include <stdio.h>
#include <stdlib.h>
#define MAX 10
typedef struct pila {
		int A[MAX];
		int Tope;
	}Pila;
void ImprimirEstructura(Pila *p);
int main(int argc, char *argv[]) 
{
	typedef int javier;
	
	Pila jose, pepe;
	javier Edad;
	Edad=45;
	jose.Tope=3;
	printf("El contedido de Edad es: %d",Edad);
	printf("\nEl contenido de tope de Jose es: %d",jose.Tope);
	printf("\nEl tamaño de la estructura Pila es: %d",sizeof(Pila));
	ImprimirEstructura(&jose);
	printf("\nEl contenido de tope de Jose es: %d",jose.Tope);
	return 0;
}
void ImprimirEstructura(Pila *p)
{
	p->Tope= 8;
	printf("\nEl contenido de tope es: %d",p->Tope);
}
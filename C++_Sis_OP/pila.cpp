#include <stdio.h>
#include <stdlib.h>
#define TAM 10
int tope=-1;
//Prototipos de funion
int PilaLlena(int t);
int PilaVacia(int t);
void AgregarE(int *a,int E);
int SacarE(int *a);
void ImprimirPila(int *a);

int main(int argc, char *argv[]) 
{
	//const int TAM = 10;
	int A[TAM],aux;
	ImprimirPila(A);
	AgregarE(A,3);
	AgregarE(A,5);
	ImprimirPila(A);
	AgregarE(A,1);
	AgregarE(A,8);
	ImprimirPila(A);
	aux=SacarE(A);
	printf("\nDato eliminado: %d",aux);
	ImprimirPila(A);
	return 0;
}



int PilaLlena(int t)
{
	if(t==TAM-1)
	{
		printf("\nLa pila esta LLena...");
		return 1;
	}
	return 0;
}
int PilaVacia(int t)
{
	if(t==-1)
	{
		printf("\nLa pila esta vacia");
		return 1;
	}
	return 0;
}
void AgregarE(int *a,int E)
{
	if(PilaLlena(tope))
	{
		printf("\nLo siento no se puede agregar elemento");
	}
	else
	{
		tope++;
		a[tope]=E;
	}
}
int SacarE(int *a)
{
	int temp;
	if(PilaVacia(tope))
	{
		printf("\nNo se puede sacar elementos, te regreso basura");
		temp=-9999;
	}
	else
	{
		temp = a[tope];
		tope = tope - 1;
	}
	return temp;
}
void ImprimirPila(int *a)
{
	int i;
	if(PilaVacia(tope))
	{
		printf("\n< >");
		
	}
	else
	{
		printf("\n<");
		for(i=tope ; i>0 ;i--)
		{
			printf("%d, ",a[i]);
		}
		printf("%d >\n",a[i]);
	}
	
	
}
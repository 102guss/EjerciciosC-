//hacer una funcion que cree una matriz, otra que imprima la matriz mediante apuntadores y lmandarlas a llamar en el metodo main

#include<stdio.h>
#include <stdlib.h>
int **creaMatriz(int * , int *);
void MostrarMatriz(int **matrizzz, int *, int *);


int main(){//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	int filas, columnas;   //son los valores con los que se va a jugar
	int **matrizz;
		printf("\nIntroduce el numero de filas de la matriz: ");
	scanf("%d",&filas);
	
	
	printf("\nIntroduce el numero de columnas de la matriz: ");
	scanf("%d",&columnas);
	
	
	matrizz=creaMatriz(&filas, &columnas);
	MostrarMatriz(matrizz, &filas, &columnas);
	
}//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

                                                                         //la única manera de crear este tipo de matriz con apuntadores, es usando memoria dinámica.
int **creaMatriz(int *filas, int *columnas){//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	int i,j;

	int **matriz;
	
	 matriz=(int **)calloc(*filas,sizeof(int*));

for (i=0; i<*filas; i++)
    {
      matriz[i]=(int*)calloc(*columnas,sizeof(int));//en cada casilla del vector me reserva memoria para las columnas, un asterisco
    }
    
//lo que me está diciendo es, por cada fila, reservame espacio para mis columnas


 for (i=0; i<*filas; i++)//este ciclo es para acceder a la casila apuntada por un apuntador
    {
      for (j=0; j<*columnas; j++)//En cada caslla del vector me vas a ingresar  un elemento
	{
	  printf("\nIntroduzca posicion [%d,%d]: ",i,j);
	  scanf("%d",&*(*(matriz+i)+j));// equivalente a "scanf("%d",&matriz[i][j]), esta instruccion me asigna un dato deacuerdo a la posicion de la matriz
        }
    }
	
return matriz; //Regresa la direccion de memoria de la matriz, que es un doble apuntador a un entero. 

}//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//otra funcion para mostrar la matriz(en realidad es un procedimiento que trabajará con los datos reales, no con copias) 

void MostrarMatriz(int **matrizzz, int *fila, int *columna){//Este es un procedimiento que interactúa con la matriz retornada de la funcion uno y los paráetros por valor de la funcion principal
	 int i,j;
  
  for (i=0; i<*fila; i++)
    {
      for (j=0; j<*columna; j++)
	{
	  printf("[%d] ",matrizzz[i][j]);                      //aquí, ya estamos tratando a la matriz(apuntador a una direccion de memoria que apunta a otra direccionde memoria), como una matriz
        }
        
      printf("\n\n");
    }
	
}


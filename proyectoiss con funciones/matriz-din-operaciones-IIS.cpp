#include <stdio.h>
#include <stdlib.h>

int **introduceMatriz(int *, int *);                                 //cabeceras
void sumaFilas(int **, int, int);                                              //suma filas
void multiplicaColumnas(int **, int, int);                                     //multiplica columnas
void rotaMatrizDerecha(int **, int, int);
void mostrarMatriz(int **, int, int);
//................................................................inicio Main
int main () 
{
  int i,filas,columnas;
  int **matriz;
  
  matriz = introduceMatriz(&filas,&columnas);
  mostrarMatriz(matriz,filas,columnas);
  sumaFilas(matriz,filas,columnas);
  multiplicaColumnas(matriz,filas,columnas);
  rotaMatrizDerecha(matriz,filas,columnas);
  mostrarMatriz(matriz,filas,columnas);
  for (i=0; i<filas; i++)
    {
      free(*(matriz+i));
    }
  free(matriz);
  return 0;
}//...................................................................Fin Main

int **introduceMatriz (int *fila, int *columna)//...inicio Funcion Principal Matriz con retorno. fila ya columnas son apuntadores**********************************************
{//este metodo me retornará una matriz(apuntador a un vector de apuntadores)
  int i, j;
  int **matriz;//apuntador doble
  
  printf("Indique numero de filas: \n");
  scanf("%d",fila);//aqui ya no se le pone "&" por que en si  la variable ya es un apuntador
  printf("Indique numero de columnas: \n");
  scanf("%d",columna);//lo mismo para la columna
  
  matriz=(int **)calloc(*fila,sizeof(int*));//recerva memoria para el vector de apuntadores, oj en los asteriscos(dos)
  
  for (i=0; i<*fila; i++)
    {
      matriz[i]=(int*)calloc(*columna,sizeof(int));//en cada casilla del vector me reserva memoria para las columnas, un asterisco
    }
    
  
  for (i=0; i<*fila; i++)//este ciclo es para acceder a la casila apuntada por un apuntador
    {
      for (j=0; j<*columna; j++)//En cada caslla del vector me vas a ingresar  un elemento
	{
	  printf("\nIntroduzca posicion [%d,%d]: ",i,j);
	  scanf("%d",&*(*(matriz+i)+j));// equivalente a "scanf("%d",&matriz[i][j]), esta instruccion me asigna un dato deacuerdo a la posicion de la matriz
        }
    }
  return matriz;//me retornará una matriz(doble apuntador a un pector)
}//.............................................................fin funcion Principal Matriz************************************************************************************

void mostrarMatriz(int **matriz, int fila, int columna)//.............................
{//fila y columna serán el tope de parda
  int i,j;
  
  for (i=0; i<fila; i++)
    {
      for (j=0; j<columna; j++)
	{
	  printf("[%d] ",matriz[i][j]);
        }
        
      printf("\n\n");
    }
}//.....................................................................................

void sumaFilas(int **matriz, int fila, int columna)//...................................
{
  int i,j,suma;
  
  for (i=0; i<fila; i++)
    {
      suma=0;
      for (j=0; j<columna; j++)
	{
	  suma += matriz[i][j];
        }
      printf("La fila %d sumada: %d \n",i+1,suma);
    }
}//........................................................................................

void multiplicaColumnas(int **matriz, int fila, int columna)//.............................
{
  int i,j, multiplica;
  
  for (j=0; j<columna; j++)
    {
      multiplica = 1;
      for (i=0; i<fila; i++)
	{
	  multiplica *= matriz[i][j];
        }
      printf("La columna %d multiplicada da: %d \n",j+1,multiplica);
    }
}//.........................................................................................

void rotaMatrizDerecha(int **matriz, int fila, int columna)//...............................
{
  int i,j;
  int **matrizt;
  
  matrizt=(int**)calloc(fila,sizeof(int*));
  for (i=0; i<fila; i++)
    {
      matrizt[i]=(int*)calloc(columna,sizeof(int));
    }
  
  for (i=0; i<fila; i++)
    {
      for (j=0; j<columna; j++)
	{
	  if (j == columna-1)
	    {
	      matrizt[i][0]=matriz[i][j]; 
            }
	  else
	    {
	      matrizt[i][j+1]=matriz[i][j];
            }     
        } 
    }
  
  for (i=0; i<fila; i++)
    {
      for (j=0; j<columna; j++)
	{
	  matriz[i][j]=matrizt[i][j];
        } 
    }
}//..........................................................................................

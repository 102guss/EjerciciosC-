//matriz dinamica 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int filas,columnas,i,j;
  int **matriz;
  
  printf("Dame el numero de filas: ");
  scanf("%d",&filas);
  printf("Dame el numero de columnas: ");
  scanf("%d",&columnas);
  
  matriz=(int **)malloc(filas*sizeof(int *));
  for (j=0;j<columnas;j++)
    matriz[j]=(int*)malloc(columnas*sizeof(int));
  for (i=0;i<filas;i++)
    for (j=0;j<columnas;j++)
      matriz[i][j]=(i+1)*(j+1);
  
  printf("Mostrando la matriz utilizando corchetes\n");  
  for (i=0;i<filas;i++)
    {
      for (j=0;j<columnas;j++)
	printf("%d\t",matriz[i][j]);
      printf("\n");
    }

  printf("Mostrando la matriz cambiando un elemento, utilizando corchetes\n");
  matriz[1][1]=200;    
  for (i=0;i<filas;i++)
    {
      for (j=0;j<columnas;j++)
	printf("%d\t",matriz[i][j]);
      printf("\n");
    }

  printf("Mostrando la matriz utilizando apuntadores\n");
  for (i=0;i<filas;i++)
    {
      for (j=0;j<columnas;j++)
	printf("%d\t",*(*(matriz +i)+j));
      printf("\n");
    }

  printf("Mostrando la matriz cambiando un elemento, utilizando apuntadores\n");
  *(*(matriz+9)+9)=500;
  for (i=0;i<filas;i++)
    {
      for (j=0;j<columnas;j++)
	printf("%d\t",*(*(matriz +i)+j));
      printf("\n");
    }
}

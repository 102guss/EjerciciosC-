//procedimiento en donde declaro una funcion que llene una matriz y la imprima en main del tamaño que quiera el usuario
#include <stdio.h>

void llenaMatriz(int, int);

int main()
{
	int x, y;
	printf("\nIntroduce un tamaño para las filas: ");
	scanf("%d",&x);
	
		printf("\nIntroduce un tamaño para las columnas: ");
	scanf("%d",&y);
	
	llenaMatriz(x, y);


}


void llenaMatriz(int filas, int columnas){           //procedimiento que recibe dos parametros(por valor, osea copia)             
	int i,j;
int matriz[filas][columnas];                                  //tamaño de la matriz
	
	for(i=0 ; i<filas; i++){
		
		 	for(j=0 ; j<columnas; j++){
	
		printf("\nIntroduce un numero en la posicion [%d, %d]: ",i,j);
		scanf("%d",&matriz[i][j]);
		
	   }
		
	}
	
	//imprimiendo el contenido de la matriz
	printf("\nLa matriz resultante es la siguiente\n");
		for(i=0 ; i<filas; i++){
		printf("\n");
		 	for(j=0 ; j<columnas; j++){
	
		printf(" [ %d] ",matriz[i][j]);
	
	   }
		
	}
	
}

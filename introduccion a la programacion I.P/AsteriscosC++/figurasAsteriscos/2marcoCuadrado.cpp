//marco cuadrado2
#include<stdio.h>
int main(){
int i,j,k,numero;
printf("Itroduce el numero de lineas del marco: ");
scanf("%d",&numero);

for(j=0; j<numero;j++)
{
	
	for(i=0; i<numero;i++)
	{
	
		if((i==0) || ( j==0) || (i==numero-1) || (j==numero-1)){
		printf(" *");
		
		}//fin del if
		else
		printf("  ");//aqui son dos espacios
	}//fin del for
		printf("\n");
}
}//fin del metodo main

//hemos terminado



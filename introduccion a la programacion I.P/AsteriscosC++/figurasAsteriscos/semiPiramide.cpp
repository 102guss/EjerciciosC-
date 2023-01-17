//piramideEscalera
#include<stdio.h>
int main(){

int i,j,numero;//supongamos que numero = 4
printf("Itroduce el numero de filas de la semi piramide: ");
scanf("%d",&numero);

for(j=0;j<numero;j++)
{

	for(i=0; i<=j;i++)
	{
	
		printf("*");
		
	}
 	printf("\n");
}

	

}//fin del método main

/* segunda forma de hacerlo
for(j=0;j<=numero;j++)
{

	for(i=0; i<=numero;i++)
	{
		if(i<j)
		{
			printf("*");
		}
	
	}
	printf("\n");
}
	
*/


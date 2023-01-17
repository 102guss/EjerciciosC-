//piramide completa de asteriscos
#include<stdio.h>
int main(){
int i,m,k,numero;//supongamos que numero = 4
printf("Itroduce el numero de filas de la  piramide: ");
scanf("%d",&numero);
	
for(i=1; i<=numero;i++)
{
	 for(m=1;m<=numero-i;m++)
	 printf(" ");
	 for(k=1;k<=2*i-1;k++)
	 printf("*");
	 printf("\n");
}	
	
}//fin del método main
//este está interesante; practicar prueba de scritorio
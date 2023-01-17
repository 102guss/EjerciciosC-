#include<stdio.h>
int main()
{
	
int i,j,n,k;
printf("Ingrese la altura de la piramide:\n");
//fflush(stdin);
scanf("%i",&n);//con n=5
for(i=1; i<=n; i++){//se va repetir 5 veces, altura(columna)
	
	for(j=1; j<=n-i;j++){//
		printf(" ");//son dos espacios
	}
		for(k=1; k<=2*i-1;k++){
		
			printf("*");
		}
			printf("\n");
}	
	
	
}// fin de main
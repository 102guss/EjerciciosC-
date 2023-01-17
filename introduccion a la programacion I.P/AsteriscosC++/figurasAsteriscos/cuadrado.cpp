//mi cuadrado de asteriscos
#include<stdio.h>
int main(){
int numero,i,j;
printf("Introduce el numero de renglones del cuadrado:");	
scanf("%d",&numero);

for(j =1; j<=numero; j++){

	for( i =1; i<=numero; i++){
		printf(" *");
		
		
	}
	printf("\n");
}
	
	
	
}//fin del main
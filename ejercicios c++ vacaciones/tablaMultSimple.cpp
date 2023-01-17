#include<stdio.h>           //tabla de multiplicar de cualquier numero  tabla simple
int main(){
int numero, result=0;	
 printf("Ingresa un numero: ");
 scanf("%d",&numero);
 
 for(int i=1; i<=10; i++){
  result=numero*i;
  printf("\n %dx%d=%d",numero,i,result);
  	
 }
 	
}// fin del main

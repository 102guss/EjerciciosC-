//ejercicio while simple

#include<stdio.h>
#include <iostream>   //se usan estas dos librerias para poder usar "cout" y "cin"
using namespace std; 
int main(){
	
int numero, resultado;
int i=1;

while(i<=5){
//cout<<"\n\ndame el  numero"<<i<<": ";	
printf("\n\ndame el numero %d: \n",i);	
scanf("%d",&numero);	
resultado=numero*10;
printf("\nEl numero %d multilpicado por 10 es: %d",i,resultado);

	
i++;

}
	
}

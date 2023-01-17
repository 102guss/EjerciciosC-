#include<stdio.h>

#include <iostream>   //se usan estas dos librerias para poder usar "cout" y "cin"
using namespace std;  

int main(){
	int numero, i;
	int  acumulador1=0;
	int acumulador2=0;
	
	//printf("ingrese el numero de la tabla: ");
	//scanf("%d",&numero);
	cout<<"ingrese el numero en la tabla: ";
	cin>>numero;
		
	for(i=1; i<=10; i++){
		
		acumulador1 = acumulador1+1;
		acumulador2 = numero*acumulador1;
		
		//printf("\n");
		//printf("%d x %d = %d",numero,acumulador1,acumulador2);
		cout<<"\n";   
		cout<<numero<< "x"<<acumulador1<<"=" <<acumulador2;               //salto de linea
	}

} //fin del metodo main

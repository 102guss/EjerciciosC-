#include<stdio.h>
#include <iostream>   //se usan estas dos librerias para poder usar "cout" y "cin"
using namespace std;  

int main(){
	
	int m,n;
	cout<<"Programa que imprime las tablas de multiplicar\n";
	//printf("Programa que imprime las tablas de multiplicar\n");
	
	for(m=1;  m<=10; m++){
		
		//printf("---------------");
		//printf("\n");
		cout<<"---------------";
		cout<<"\n";
		for(n=1; n<=10;n++){
			
			//printf("%dx%d = %d",m,n,m*n);
			//printf("\n");
			
			cout<< m <<"x"<< n <<"="<< m*n;   
			cout<<"\n";
		}
		//printf("\n");	
		cout<<"\n";
	}
	
	
}//fin del metodo main

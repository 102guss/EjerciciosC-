//Sin retorno y sin parametros
#include<stdio.h>
void multiplicar(){                                  //no hay parametros en el parentesis.

int resultado=0;
int a,b;
printf("inserta un numero: ");
scanf("%d",&a);

printf("inserta otro numero: ");
scanf("&d",&b);

resultado=a*b;                                      

printf("El resultado es: %d",resultado);	         // operacion dentro de la funcion llamada"multiplicar
	
}                                                   //Se cierra el cuerpo de la primer funcion.

int main(){                                         //Se abre nuevo cuerpo de la segunda funcion

multiplicar();                                      //Se llama a la primer funcion sin parametros.
	
fflush(stdin);
getchar();	
	
	
}

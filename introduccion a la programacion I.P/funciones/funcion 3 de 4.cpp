//Funcion sin retorno y con parametros.
#include<stdio.h>                            
void multiplicar (int x, int y){                //parametros de la funcion
   //nombre de la funcion.
	int resultado=0;                           //nueva variable que empieza en cero, es como un acumulador.
	
	resultado=x*y;                            //operacion.
	
	printf("El resultado es: %d", resultado); // sin retorno por lo tanto se imprime el resultado dentro de la funcion.
}                                             //se cierra el cuerpo de la funcion.

int main(){                                     //nueva funcion main.
int a,b;                                        //Declaramos nueva variables.
printf("\t Programa que multiplica dos numeros cualesquiera\n");         //Titulo, opcional.
printf("\n Inserta un  numero: ");
scanf("%d",&a);

printf("\n Inserta otro numero: ");
scanf("%d",&b);

multiplicar (a,b);                           //mandamos a llamar el numbre de la funcion.

fflush(stdin);
getchar();
                                              //NOTA:
                                             //Como es con parametros los pedimos en el "main" y despues se las mandamos
                                            //a la primera funcion.
}

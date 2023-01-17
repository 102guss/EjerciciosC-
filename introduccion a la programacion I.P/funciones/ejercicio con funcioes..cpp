//Ejersicio con funciones
#include<stdio.h>

int suma(int x, int y){                  //Se asignan parametros y se abre el cuerpo de la funcion con un corchete "{".
	                            
int suma=0;                              //Nueva variable que empieza que se iguala a "cero"
suma=x+y;
return suma;                             //retorna la variable funcion suma,
}                                        // se cierra el cuerpo de la funcion.

int mult (int x, int y){
int res=0;
res=x*y;                                 // "res" es el resultado en tonde se va a guardar la aperacion.
return res;                               // nuevamente se va a retornar (devolver un resultado) 		
}                                        // se cierra el cuerpo de la funcion.

int divicion(){                          //aqui no hay paremetros, por lo tanto no se pone nada adentro del parentesis de la divicion.
int res=0,x,y;                           //La variable "res"  se iguala a cero porque desde ahi empieza.  Se declaran nuevas variables.
printf("\nIngrese un valor :");            // imprimimos un letrero q aparecera en pantalla.
scanf("%d",&x);                          //Se guarda en la variable asignada"x".

printf("Ingrese otro valor: ");          //volvemos a imprimir otro letrero en pantalla.
scanf("%d",&y);                          //Se guarda la variable asignada.
res=x/y;                                 // eperacion:El resultado va a ser el de dividir la "x" entre "y"	
}                                        //Se cierra el cuerpo de la funcion.

void resta(int x, int y){                // asignamos parametros y abrimos el cuerpo de la funcion.
                                         //En este caso la funcion llamada "resta" no retorna ningun valor por lo cual se le asigna un "void".
int resta=0;                             //igualamos la funcion resta para que empiese desde cero.                                       
int res=x-y;                             //operacion.
printf("\nLa resta es: %d\n", res);        //Jalamos la variable resta para que aparesca en pantalla el resultado de la resta.	
}                                        //Cerramos el cuerpo de la funcion.

int main(){                              // creamos nueva funcion y abrimos cuerpo.                    
int a,b;                                //Creamos nuevas variables para darles valores a los numeros q ingresara el usuario.
printf("\t Programa que realiza una serie de operaciones\n");                
printf("\nInserta un valor: ");            //Imprimimos letrero en pantalla.
scanf("%d",&a);                          //El valor se guarda en "scanf"

printf("Inserta otro valor: ");          //Impresion de pantalla
scanf("%d",&b);                          //Se guarda la variable.

printf("\nLa suma es: %d\n", suma(a,b));             //se imprime  en pantalla la funcion con sus parametros.
printf("\nLa multiplicacion es: %d\n", mult(a,b));   //se imprime  en pantalla la funcion con sus parametros.
printf("\nLa divicion es: %d\n", divicion());              //se imprime  en pantalla la funcion sin parametros.
resta(a,b);                                          // se manda a llamar la funcion resta con sus parametros.

fflush(stdin);
getchar();
	
	
}                                                    //se cierra el cuerpo de la ultima funcion.

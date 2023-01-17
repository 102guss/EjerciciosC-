//Areglos con caracteres.
#include<stdio.h>
int main(){
char texto[5];	                                //iniciamos con "char", porque es de caracteres.          //caracteres q puede almacenar nuestro areglo"5" 
printf("Escribe tu nombre: ");                                        //letrero en pantalla.
gets (texto);                                                         //la instruccion "gets" es igual que el "scanf" pero con la diferencia que guarda espacios.
printf("\nBienvenido al mundo de la programacion %s",texto);          //Pra imprimirlo le asignamos un "%s" ya que es de tipo caracter-
                                                                     //El nombre se guardara en el sub indice "5" de la funcion.
fflush(stdin);
getchar();
	
	
}

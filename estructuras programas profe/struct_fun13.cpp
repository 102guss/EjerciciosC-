#include <stdio.h>

struct estructura_amigo
{
  char nombre[30];
  char apellido[40];
  long int telefono;
  int edad;
};

struct estructura_amigo amigo = {"Juanito","Lopez",9834033467,19};

int suma(int);

int main()
{
  printf("Mi amigo %s %s tiene ", amigo.nombre, amigo.apellido);
  printf("%i a�os \n", amigo.edad);
  printf("y su tel�fono es el %li\n", amigo.telefono);
  printf("dentro de 20 a�os tendr� %i\n", suma(amigo.edad));//Se manda a llamar la funci�n que altera el miembro edad  
  
  return 0;
}

int suma(int edaad)//La funci�n reciente un entero cualquiera y lo altera, que en este caso corresponde con el miembro de una estructura  
{
  return edaad + 20;
}

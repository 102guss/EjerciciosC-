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
  printf("%i años \n", amigo.edad);
  printf("y su teléfono es el %li\n", amigo.telefono);
  printf("dentro de 20 años tendrá %i\n", suma(amigo.edad));//Se manda a llamar la función que altera el miembro edad  
  
  return 0;
}

int suma(int edaad)//La función reciente un entero cualquiera y lo altera, que en este caso corresponde con el miembro de una estructura  
{
  return edaad + 20;
}

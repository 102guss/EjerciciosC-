//Estructuras con funciones 2
#include <stdio.h>

struct estructura_amigo
{
  char nombre[30];
  char apellido[40];
  long int telefono;
  int edad;
};

struct estructura_amigo amigo = {"Juanito","Lopez",9834033673,30};

int suma(struct estructura_amigo *);

int main()
{
  printf("Mi amigo %s %s tiene ", amigo.nombre, amigo.apellido);
  printf("%i años \n", amigo.edad);
  printf("y su teléfono es el %li\n", amigo.telefono);
  printf("dentro de 20 años tendrá %i\n", suma(&amigo));
  
  return 0;
}

int suma(struct estructura_amigo *arg_amigo)
{
  return arg_amigo->edad + 20;
}

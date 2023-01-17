#include <stdio.h>

struct estructura_amigo
{
  char nombre[30];
  char apellido[40];
  long int telefono;
  int edad;
};



int suma(int);
struct estructura_amigo amigo = {"Juanito","Lopez",9834033467,19};
int main()
{
  printf("Mi amigo %s %s tiene ", amigo.nombre, amigo.apellido);
  printf("%i anios \n", amigo.edad);
  printf("y su teléfono es el %li\n", amigo.telefono);
  printf("dentro de 20 años tendra %i\n", suma(amigo.edad));
  
  return 0;
}

int suma(int edad)
{
  return edad + 20;
}

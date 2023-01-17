#include <stdio.h>

struct estructura_amigo
{
  char nombre[30];
  char apellido[40];
  long int telefono;
  int edad;
}amigo;//Amigo es el alias de la estructura  

int main()
{
  //p_amigo es un apuntador que apunta a la estructura amigo
  struct estructura_amigo *p_amigo;
  
  p_amigo = &amigo;
  
  //Introducimos los datos mediante apuntadores
  printf("Nombre: ");
  gets(p_amigo->nombre);
  printf("Apellido: ");
  gets(p_amigo->apellido);
  printf("Edad: ");
  scanf("%i", &p_amigo->edad);
  printf("Telefono: ");
  scanf("%li", &p_amigo->telefono);
  
  /* Mostramos los datos */
  printf("Mi amigo %s %s tiene ", p_amigo->nombre, p_amigo->apellido);
  printf("%i años \n", p_amigo->edad);
  printf("y su teléfono es %li\n", p_amigo->telefono);
  
  return 0;
}

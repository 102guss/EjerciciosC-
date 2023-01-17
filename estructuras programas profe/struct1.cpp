#include <stdio.h>

#define MAXNOM 40

struct Persona
{
  char nombre[MAXNOM+1];
  int edad;
};

int main(void)
{
  struct Persona per;

  printf("Nombre: ");
  gets(per.nombre);
  printf ("Edad  : ");
  scanf("%d", &per.edad);

  printf("El nombre es: %s ", per.nombre);
  printf("\n");
  printf("La edad de la persona es: %i ", per.edad);
  printf("\n");
  
  return 0;
}

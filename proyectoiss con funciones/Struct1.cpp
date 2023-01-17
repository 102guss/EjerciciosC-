#include <stdio.h>

#define MAXNOM 40

struct Persona
{
  char nombre[MAXNOM+1];
  int edad;
};//siempre al final de una estructura

int main(void)
{
  struct Persona per;//per es la variable de tipo persona

  printf("Nombre: ");
  gets(per.nombre);//per.atriubuto_nombre
  printf ("Edad  : ");
  scanf("%d", &per.edad);//per.atributo_edad

  printf("El nombre es: %s ", per.nombre);//%s es para mostrar una cadena
  printf("\n");
  printf("La edad de la persona es: %i ", per.edad);
  printf("\n");
  
  return 0;
}

#include <stdio.h>

struct estructura_amigo
{
  char nombre[30];
  char apellido[40];
  long int telefono;
  int edad;
};

struct estructura_amigo amigo = {"Juanito","Lopez",1234567823,30};

int main()
{
  struct estructura_amigo *p_amigo;//creacion del apuntador tipo estructura  
  
  
  p_amigo = &amigo;//Asignando referencia de la estructura "amigo" al apuntador tipo de estructura  
  
  printf("Mi amigo %s %s tiene ", p_amigo->nombre, p_amigo->apellido);//Con la flecha se referencia directamente el miembro del estructura amigo  
  printf("%i años \n", p_amigo->edad);
  printf("y su teléfono es %li\n" , p_amigo->telefono);

  return 0;
}

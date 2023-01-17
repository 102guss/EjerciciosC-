#include <stdio.h>

#define ELEMENTOS 3

struct estructura_amigo
{
  char nombre[30];
  char apellido[40];
  long int telefono;
  int edad;
};
//Esto es un arreglo de estructuras  
struct estructura_amigo amigo[] = {"Juanito","Lopez",9834033675,30,"Pedro","Gomez",9834278902,42,"Susana","Martinez",9893254789,20};
//En lugar de ponerse la cantidad de amigos dentro del arreglo
//Se inicia el San Los datos manualmente en el arreglo de tipo estructura  
int main()
{
  struct estructura_amigo *p_amigo;
  int num_amigo;

  //apunta al primer elemento del arreglo
  p_amigo = amigo;
  
  for(num_amigo=0; num_amigo<ELEMENTOS; num_amigo++)//Se repetirá de tres veces este ciclo que consigue contra cantidad de amigos  
    {
      printf("Mi amigo %s %s tiene ", p_amigo->nombre, p_amigo->apellido);
      printf("%i años \n", p_amigo->edad);
      printf("y su teléfono es el %li\n", p_amigo->telefono);
      
      p_amigo++;  //Se incrementa en uno es numero de estructuras en el arreglo  
    }
  
  return 0;
}

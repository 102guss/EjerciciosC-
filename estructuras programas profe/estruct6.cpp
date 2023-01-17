#include <stdio.h>

#define ELEMENTOS 3

struct estructura_amigo
{
  char nombre[30];
  char apellido[40];
  char telefono[10];
  int edad;
};

struct estructura_amigo amigo[ELEMENTOS];//amigo de tipo estructura con 3 elementos(3 amigos) 
//Tres amigos con su misma estructura
 

int main()
{
  int num_amigo;
  
  for(num_amigo=0; num_amigo<ELEMENTOS; num_amigo++)//Se repetirá tres veces, equivalente a la cantidad de amigos  
    {
      printf("\nDatos del amigo número %i: \n",num_amigo+1);
      
      printf("Nombre: ");
      gets(amigo[num_amigo].nombre);
      printf("Apellido: ");
      gets(amigo[num_amigo].apellido);
      printf("Teléfono: ");
      gets(amigo[num_amigo].telefono);
      printf("Edad: ");
      scanf("%i", &amigo[num_amigo].edad);
      
      while(getchar()!= '\n');
    }
  
  for(num_amigo=0; num_amigo<ELEMENTOS; num_amigo++)
    {
      printf("Mi amigo %s %s tiene ", amigo[num_amigo].nombre, amigo[num_amigo].apellido);
      printf("%i años ", amigo[num_amigo].edad);
      printf("y su teléfono es el %s.\n", amigo[num_amigo].telefono);
    }
  return 0;
}

#include <stdio.h>

#define ELEMENTOS 3

struct estructura_amigo
{
  char nombre[30];
  char apellido[40];
  long int telefono;
  int edad;
};

int main()
{
  struct estructura_amigo amigo[ELEMENTOS], *p_amigo;//Es un arreglo con tres estructuras del mismo tipo  
  
  int num_amigo;
  
  p_amigo = amigo;//no lleva & porq es un areglo,Pero el apuntador en se le asigna la dirección de memoria de la estructura  
  //El apuntador apunta a un arreglo de estructuras del mismo tipo  
  //introducimos los datos mediante apuntadores
  for(num_amigo=0; num_amigo<ELEMENTOS; num_amigo++)//se repite 3 veces
    {//Para ingresar datos  
      printf("\nDatos del amigo %i:\n", num_amigo+1);
      
      printf("Nombre: ");
      gets(p_amigo->nombre);
      printf("Apellido: ");
      gets(p_amigo->apellido);
      printf("Edad: ");
      scanf("%i", &p_amigo->edad);
      printf("Telefono: ");
      scanf("%li", &p_amigo->telefono);
      
      while(getchar()!= '\n');//es pa q no se amontone todoby me deje ingresar datos correctamente
      
      p_amigo++;//se incrementa el apuntador en el arreglo de estructuras
    }//fin del for
  
  p_amigo = amigo;//Apuntador al arreglo de estructuras  
  
  for(num_amigo=0; num_amigo<ELEMENTOS; num_amigo++)
    {//Para mostrar datos  
      printf("Mi amigo %s %s tiene ", p_amigo->nombre, p_amigo->apellido);
      printf("%i años \n", p_amigo->edad);
      printf("y su teléfono es el %li\n", p_amigo->telefono);
      
      p_amigo++;  
    }
  
  return 0;
}

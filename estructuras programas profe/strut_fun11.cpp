#include <stdio.h>

struct estructura_amigo
{
  char nombre[30];
  char apellido[40];
  long int telefono;
  int edad;
};

struct estructura_amigo amigo = {"Juanito","Lopez",9834033637,17};//Se inicializa antes del main  

int suma(struct estructura_amigo);

int main()
{
  printf("Mi amigo %s %s tiene ", amigo.nombre, amigo.apellido);
  printf("%i años \n", amigo.edad);
  printf("y su teléfono es el %li\n", amigo.telefono);
  printf("dentro de 20 años tendrá %i\n", suma(amigo));//Se mandará a llamar a la función con nuestra propia variable tipo estructura ya inicializa  anteriormente  
    
  return 0;
}

int suma(struct estructura_amigo arg_amigo)//Recibe un argumento(variable) del tipo estructura  
{
  return arg_amigo.edad + 20;//Accede al miembro edad y le suma 20 y El retorna la variable de tipo estructura   
}

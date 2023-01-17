#include <stdio.h>
#include <ctype.h> // Para toupper()

struct empleado
{
  char numemp[13];
  char nombre[30];
  int horasLaboradas;
  float valorHora, descuentos;
};

struct empleado campoEmpleado;

int main()
{
  char siga;
  float sueldo;

  do
    {
      printf("Ingrese los siguientes datos: \n\n");
      
      printf("Numero de empleado: ");
      gets(campoEmpleado.numemp);
      
      printf("Nombre: ");
      gets(campoEmpleado.nombre);
      
      printf("Horas Laboradas: ");
      scanf(" %d", &campoEmpleado.horasLaboradas);
      
      printf("Valor hora : ");
      scanf(" %f", &campoEmpleado.valorHora);
      
      printf("Descuentos: ");
      scanf(" %f", &campoEmpleado.descuentos);
  
      sueldo = (campoEmpleado.horasLaboradas*campoEmpleado.valorHora)-campoEmpleado.descuentos;
      
      printf("\nEl sueldo es: %.2f \n\n", sueldo);
      
      printf("Adicionar otro empleado S/N?: ");
      scanf(" %c", &siga);
      //Toma un carácter y devuelve su versión en mayúscula (si es que existe).
      //Cuando no tiene versión en mayúscula, devuelve el argumento sin modificaciones.
      //Esta función está declarada en el archivo ctype.h
      siga = toupper(siga);
      getchar();
      printf("\n\n");
    }
  while(siga == 'S');//se repetira mientras el ccaracter introducido por teclado se igual a "s"
 // si la opcion es diferente de "s", termina el programa
     printf("Programa finalizado");
  return 0;
}
  

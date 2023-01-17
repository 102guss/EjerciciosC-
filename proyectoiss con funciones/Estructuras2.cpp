#include <stdio.h>
#include <ctype.h> // Para toupper()

struct empleado
{
  char numemp[13];
  char nombre[30];
  int horasLaboradas;
  float valorHora, descuentos;
};

struct empleado campoEmpleado;//"campoEmpleado es el alias" y se declara despues de la estructura creda.

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
      scanf(" %c", &siga);//lo que me teclee el usuario lo voy a guardar en esta variable y aremos que el usuario teclee una "s"
      //Toma un carácter y devuelve su versión en mayúscula (si es que existe).
      //Cuando no tiene versión en mayúscula, devuelve el argumento sin modificaciones.
      //Esta función está declarada en el archivo ctype.h
      siga = toupper(siga);//lo que me de el usuario(una "s"), lo voy a pasar a mayuscula.
      getchar();
      printf("\n\n");
    }
  while(siga == 'S');
  
  return 0;
}
  

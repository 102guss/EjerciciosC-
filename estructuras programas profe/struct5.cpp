#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct infopersona
{
  char direccion[80];
  char ciudad[30];
  char estado[30];
  long int codigopostal;	
};

struct empleado
{
  char nomempleado[50];
  struct infopersona infoempleado; 
  double salario;
} emp1={"Juan Perez","Insurgentes 200", "CDMX", "CDMX", 04420, 7532.52};

struct cliente
{
  char nomcliente[50];
  struct infopersona infocliente;
  double saldo;
};

int main(void)
{
  char siga;
  
  struct cliente MiCliente;
  
  do
    {
      printf("Ingrese los siguientes datos: \n\n");
      
      printf("Nombre del cliente: ");
      gets(MiCliente.nomcliente);
      
      printf("Dirección: ");
      gets(MiCliente.infocliente.direccion);

      printf("Ciudad: ");
      gets(MiCliente.infocliente.ciudad);

      printf("Estado: ");
      gets(MiCliente.infocliente.estado);

      printf("Código postal: ");
      scanf(" %ld", &MiCliente.infocliente.codigopostal);

      MiCliente.saldo = 317.23;
             
      printf("\nDatos presentados \n\n");

      printf("El empleado que te atendió fue: %s \n", emp1.nomempleado);
      printf("Los datos del cliente son: \n");
      printf("Nombre: %s \n",MiCliente.nomcliente);
      printf("Dirección: %s \n",MiCliente.infocliente.direccion);
      printf("Ciudad: %s \n",MiCliente.infocliente.ciudad);
      printf("Estado: %s \n",MiCliente.infocliente.estado);
      printf("Código postal: %ld \n",MiCliente.infocliente.codigopostal);
      printf("Realizando una compra de: %.2f \n",MiCliente.saldo);
      
      printf("Añadir otro dato S/N?: ");
      scanf(" %c", &siga);

      siga = toupper(siga);
      getchar();
      printf("\n\n");
    }
  while(siga == 'S');
  
  return 0;
}

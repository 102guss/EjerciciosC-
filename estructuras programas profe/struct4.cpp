#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct empleado
{
  char nomempleado[50];
  char direccion[80];
  char ciudad[30];
  char estado[30];
  long int codigopostal;
  double salario;
} emp1={"Juan Perez","Insurgentes 200", "CDMX", "CDMX", 04420, 7532.52};//este ya esta inicializado

struct cliente//misma estructura q el anterior pero sin inicializar
{
  char nomcliente[50];
  char direccion[80];
  char ciudad[30];
  char estado[30];
  long int codigopostal;
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
      gets(MiCliente.direccion);

      printf("Ciudad: ");
      gets(MiCliente.ciudad);

      printf("Estado: ");
      gets(MiCliente.estado);

      printf("Código postal: ");
      scanf(" %li", &MiCliente.codigopostal);

      printf("Saldo de la compra: ");
      scanf(" %lf", &MiCliente.saldo);

      printf("\nDatos presentados \n\n");

      printf("El empleado que te atendió fue: %s \n", emp1.nomempleado);
      printf("Los datos del cliente son: \n");
      printf("Nombre: %s \n",MiCliente.nomcliente);
      printf("Dirección: %s \n",MiCliente.direccion);
      printf("Ciudad: %s \n",MiCliente.ciudad);
      printf("Estado: %s \n",MiCliente.estado);
      printf("Código postal: %li \n",MiCliente.codigopostal);
      printf("Realizando una compra de: %.2f \n",MiCliente.saldo);
      
      printf("Añadir otro dato S/N?: ");
      scanf(" %c", &siga);

      siga = toupper(siga);//convierte el caracter de minuscula a mayuscula por si acaso
      getchar();
      printf("\n\n");
    }
  while(siga == 'S');
  
  return 0;
}

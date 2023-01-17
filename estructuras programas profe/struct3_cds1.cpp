#include <stdio.h>
#include <string.h>

#define MAXLINEA 80
#define MAXDISCOS 1000
#define LONTITULO 80
#define LONINTERPRETE 40

enum {PonerCD=1, ListadoCompleto, Salir};

struct Tiempo
{
  int minutos;
  int segundos;
};

struct CompactDisc
{
  char titulo[LONTITULO+1];
  char interprete[LONINTERPRETE+1];
  struct Tiempo duracion;
  int anyo;
};

struct Coleccion
{
  struct CompactDisc cd[MAXDISCOS];
  int cantidad;
};

int main(void)
{
  struct Coleccion mis_cds;
  int opcion, i, j;
  char titulo[LONTITULO+1], interprete[LONINTERPRETE+1];
  char linea[MAXLINEA]; // Para evitar los problemas de scanf.
  
  /* Inicializacion de la coleccion. */
  mis_cds.cantidad = 0;
  
  /* Bucle principal: menu de opciones. */
  do
    {
    do
      {
	printf("Coleccion de CDs\n");
	printf("----------------\n");
	printf("1) Añadir CD\n");
	printf("2) Listar todo\n");
	printf("3) Salir\n");
	printf("Opcion: ");
	gets(linea);
	sscanf(linea, "%d", &opcion);
	if(opcion<1 || opcion>3)
	  printf("Opcion inexistente. Debe estar entre 1 y 3\n");
      }
    while(opcion<1 || opcion>3);
    
    switch(opcion)
      {
      case PonerCD: // Añadir un CD.
	if(mis_cds.cantidad == MAXDISCOS)
	  printf("La base de datos esta llena. Lo siento.\n");
	else
	  {
	    printf("Titulo:     ");
	    gets(mis_cds.cd[mis_cds.cantidad].titulo);
	    printf("Interprete: ");
	    gets(mis_cds.cd[mis_cds.cantidad].interprete);
	    printf("Minutos:    ");
	    gets(linea);
	    sscanf(linea, "%d", &mis_cds.cd[mis_cds.cantidad].duracion.minutos);
	    printf("Segundos:   ");
	    gets(linea);
	    sscanf(linea, "%d", &mis_cds.cd[mis_cds.cantidad].duracion.segundos);
	    printf("Año:        ");
	    gets(linea);
	    sscanf(linea, "%d", &mis_cds.cd[mis_cds.cantidad].anyo);
	    mis_cds.cantidad++;
	  }
	break;
	
      case ListadoCompleto: // Listar todo.
	for(i=0; i<mis_cds.cantidad; i++)
	  printf("%d %s de %s (%d:%d) %d\n", i, mis_cds.cd[i].titulo,
		 mis_cds.cd[i].interprete,
		 mis_cds.cd[i].duracion.minutos,
		 mis_cds.cd[i].duracion.segundos,
		 mis_cds.cd[i].anyo);
	break;
      }
    }
  while(opcion != Salir);
  
  printf("Gracias por usar nuestro programa.\n");
  
  return 0;
}

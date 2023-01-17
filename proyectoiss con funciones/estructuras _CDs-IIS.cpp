#include <stdio.h>
#include <string.h>

#define MAXLINEA 80
#define MAXDISCOS 1000
#define LONTITULO 80
#define LONINTERPRETE 40

enum {PonerCD=1, ListadoCompleto, Salir};//estos van a ser mis casos

struct Tiempo//tiempo..........................
{
  int minutos;
  int segundos;
};

struct CompactDisc//disco compacto.............
{
  char titulo[LONTITULO+1];
  char interprete[LONINTERPRETE+1];
  struct Tiempo duracion;
  int anyo;
};

struct Coleccion//coleccion lleva a todos los anteriores...............................
{
  struct CompactDisc cd[MAXDISCOS];
  int cantidad;//se le añada un miembro más
};

int main(void)
{
  struct Coleccion mis_cds;//nueva estancia con la última creada
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
    printf("----------------\n");
	printf("Coleccion de CDs\n");
	printf("----------------\n");
	printf("1)Aniadir CD\n");
	printf("2) Listar todo\n");
	printf("3) Salir\n");
	printf("\nOpcion: ");
	gets(linea);
	sscanf(linea, "%d", &opcion);//lee la opcion que elijas?
	if(opcion<1 || opcion>3)
	  printf("Opcion inexistente. Debe estar entre 1 y 3\n");
      }
    while(opcion<1 || opcion>3);//vuelva a hacer que se repita  el menú hasta que ecribas un número que stá en el rango
    
    switch(opcion)
      {
      case PonerCD: // viene de la sentencia enum.
	if(mis_cds.cantidad == MAXDISCOS)//si la cantidad de cds es igual a 1000
	  printf("La base de datos esta llena. Lo siento.\n");
	else//aqui va agregando los datos del cd
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
	    printf("\nEl disco se anadio  exitosamente\n\n");
	  }
	break;
	
      case ListadoCompleto: // Listar todo.
      
	for(i=0; i<mis_cds.cantidad; i++)
	  printf("%d- %s de %s (%d:%d) %d\n", i+1, mis_cds.cd[i].titulo,
		 mis_cds.cd[i].interprete,
		 mis_cds.cd[i].duracion.minutos,
		 mis_cds.cd[i].duracion.segundos,
		 mis_cds.cd[i].anyo);
		  printf("\n");
	break;
      }
    }
  while(opcion != Salir);
  
  printf("Gracias por usar nuestro programa.\n");
  
  return 0;
}

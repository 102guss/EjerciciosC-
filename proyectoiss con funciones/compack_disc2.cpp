#include <stdio.h>
#include <string.h>

#define MAXLINEA 80
#define MAXDISCOS 1000
#define LONTITULO 80
#define LONINTERPRETE 40
#define MAXCANCIONES 10


struct Tiempo
{
  int minutos;
  
  int segundos;
};

//Informaci�n extra de canciones
struct Cancion
{
  char titulo[LONTITULO+1];
  struct Tiempo duracion;
};

struct CompactDisc
{
  char titulo[LONTITULO+1];
  char interprete[LONINTERPRETE+1];
  struct Tiempo duracion;
  int anio;
  struct Cancion cancion[MAXCANCIONES];
  int canciones;//N�mero de canciones del disco.
};

struct Coleccion
{
  struct CompactDisc cd[MAXDISCOS];
  int cantidad;
};

int main(void)//funcion principal............................................................................................
{
  struct Coleccion mis_cds;
  int opcion,segundos,i,j;
  char titulo[LONTITULO+1];
  char interprete[LONINTERPRETE+1];
  char linea[MAXLINEA];
  
  //Inicializacion de la coleccion.
  mis_cds.cantidad = 0;
  
  //Menu de opciones.
  
    {//do_while_principal..................................................................................
    do  // repetira todos los casos mientras la opcion sea diferente de "5" osea de salir
      {
	printf("Coleccion de CDs\n");
	printf("----------------\n");
	printf("1) A�adir CD\n");
	printf("2) Listar todo\n");
	printf("3) Lista por int�rprete\n");
	printf("4) Eliminar un registro\n");
	printf("5) Salir\n");
	printf("Opcion: ");
	gets(linea);
	sscanf(linea, "%d", &opcion);//linea = opcion
	if(opcion<1 || opcion>5)
	  printf("Opcion inexistente. Debe estar entre 1 y 5\n");//cuando se sale fuera de rango de opciones del menu
      }
    while(opcion<1 || opcion>5);//q se siga repitiendo el menu mientras esta fuera de rango
    
    switch(opcion)
      {
      case 1: // A�adir un CD.
	if(mis_cds.cantidad == MAXDISCOS)//ya no se pueden insertar mas discos
	  printf("La base de datos esta llena. Lo siento.\n");
	else
	  {
	    printf("Titulo del cd: ");
	    gets(mis_cds.cd[mis_cds.cantidad].titulo);
	    printf("Interprete: ");
	    gets(mis_cds.cd[mis_cds.cantidad].interprete);
	    printf("Minutos: ");
	    /*Ocupamos gets(linea) para que almacene la informaci�n del tiempo en un
	    mismo registro y evitar posibles complicaciones en el almacenamiento
	    de los datos. Almacena la informaci�n de los minutos en la variable linea
	    la cual se pasa como par�metro en la funci�n sscanf.*/
	    gets(linea);
	    /*La funci�n sscanf() es similar a la funci�n scanf() la diferencia es que
	    en lugar de tomar los datos de la entrada, los toma del propio programa.
	    Normalmente se utiliza para obtener los datos de una variable que se ha obtenido 
	    bien de la entrada o de un fichero o de una base de datos.
	    Nosotros la utilizaremos para explicar c�mo funciona scanf() ya que permite que 
	    los datos se mantengan en el propio programa, cosa que no ocurre cuando los datos 
	    se introducen desde el teclado.Por ejemplo:
	    sscanf("12, 34, 45", "%d, %d, %d", &x, &y, &z);
	    En la instrucci�n anterior, la cadena "12, 34, 45" contiene los valores que se 
	    asignar�n a las variables x, y, y z. Es decir, la instrucci�n anterior es equivalente 
	    a las siguientes instrucciones de asignaci�n: x = 12; y = 34; z = 45;
	    Normalmente, cuando hay que asignar un valor a una variable, se utilizan las instrucciones 
	    de asignaci�n, pero cuando los datos no proceden del propio programa, sino que proceden 
	    de la entrada del teclado, entonces no puede utilizarse la instrucci�n de asignaci�n y 
	    tiene que utilizarse una instrucci�n similar a la siguiente:
	    scanf("%d, %d, %d", &x, &y, &z);*/
	    sscanf(linea, "%i", &mis_cds.cd[mis_cds.cantidad].duracion.minutos);
	    printf("Segundos: ");
	    gets(linea);
	    sscanf(linea, "%i", &mis_cds.cd[mis_cds.cantidad].duracion.segundos);
	    printf("A�o: ");
	    gets(linea);
	    sscanf(linea, "%i", &mis_cds.cd[mis_cds.cantidad].anio);

	    do
	      {
		/*C�digo a implementar
		  A�ada las funciones necesarias para que adem�s, contenga las canciones de cada disco. 
		  Empezaremos por definir un nuevo registro: el que modela una canci�n. 
		  De cada canci�n nos interesa el t�tulo, la duraci�n.
		  Adem�s a�ada una funci�n que calcule y muestre el nuevo tiempo de duraci�n de disco que
		  sea acorde al tiempo de las nuevas canciones, por ejemplo si el disco contiene 3 canciones
		  con las siguientes duraciones, 8:32, 9:12, 7:33, debemos obtener la nueva duraci�n que 
		  sea la suma de dichas canciones en cuyo caso tenemos una duraci�n del disco de 25:17*/
	      }
	    mis_cds.cantidad++;
	  }
	break;
	
      case 2: // Listar todo.
	for(i=0; i<mis_cds.cantidad; i++)
	  printf("%i El album: %s \n  Del artista: %s \n  Con una duraci�n de: (%i:%i) \n  Del a�o: %i\n  Con %i canciones\n", i+1, mis_cds.cd[i].titulo,mis_cds.cd[i].interprete,mis_cds.cd[i].duracion.minutos,mis_cds.cd[i].duracion.segundos,mis_cds.cd[i].anio,mis_cds.cd[i].canciones);
	break;

      case 3: //Listado por interprete
	/*Funci�n a implementar
	  Deben de verificar que el int�rprete exista,
	  en caso de que si exista mostar todos los elementos que
	  haya de dicho autor.*/
	break;

      case 4: //Borrar un registro
	printf("T�tulo: ");
	gets(titulo);
	printf("Int�rprete: ");
	gets(interprete);
	for(i=0;i<mis_cds.cantidad;i++)
	  {
	    /*La funci�n compara dos cadenas de texto, en este caso compara la cadena 
	      que contiene la informaci�n de titulo con el miembro titulo de un disco y de manera similar
	      compara el interprete con el miembro interprete de un disco, la funci�n strcmp regresa 0 si
	      las dos cadenas son iguales, devuelve menor que cero si cadena1 es menor que cadena2 y 
	      devuelve mayor que cero si cadena1 es mayor que cadena2.*/
	    if(strcmp(titulo,mis_cds.cd[i].titulo)==0 && strcmp(interprete,mis_cds.cd[i].interprete)==0)
	      break;
	  }
	/*Si las dos cadenas fueron iguales elimina el registro y solo resta eliminar el �ndice del arreglo
	  en donde se encontraba la informaci�n para que deje de considerarlo*/
	if(i<mis_cds.cantidad)
	  {
	    for(j=i+1;j<mis_cds.cantidad;j++)
	      mis_cds.cd[j-1]=mis_cds.cd[j];
	    mis_cds.cantidad--;
	  }
	break;

      case 5://Salir
	break;
      }
    }//FIN_DO_WHILE_PRINCIPAL..............................................................................
  while(opcion != 5);
  
  printf("Gracias por usar nuestro programa.\n");
  
  return 0;
}//fin_funcionn_princippal................................................................................................




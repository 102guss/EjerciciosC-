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

//Información extra de canciones
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
  int canciones;//Número de canciones del disco.
};

struct Coleccion
{
  struct CompactDisc cd[MAXDISCOS];
  int cantidad;
};

int main(void)//funcion principal............................................................................................
{
  struct Coleccion mis_cds;
   struct CompactDisc infoDisco;//informacion del disco
  int opcion,segundos,i,j;
  char titulo[LONTITULO+1];
  char interprete[LONINTERPRETE+1];
  char linea[MAXLINEA];
  
  //Inicializacion de la coleccion.
  mis_cds.cantidad = 0;
  
  //Menu de opciones.
  do
    {//do_while_principal..................................................................................
    do  // repetira todos los casos mientras la opcion sea diferente de "5" osea de salir
      {
	printf("Coleccion de CDs\n");
	printf("----------------\n");
	printf("1) Añadir CD\n");
	printf("2) Listar todo\n");
	printf("3) Lista por intérprete\n");
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
      case 1: // Añadir un CD.
	if(mis_cds.cantidad == MAXDISCOS)//ya no se pueden insertar mas discos
	  printf("La base de datos esta llena. Lo siento.\n");
	else
	  {
	    printf("Titulo del cd: ");
	    gets(mis_cds.cd[mis_cds.cantidad].titulo);
	    printf("Interprete: ");
	    gets(mis_cds.cd[mis_cds.cantidad].interprete);
	    printf("Minutos: ");
	    /*Ocupamos gets(linea) para que almacene la información del tiempo en un
	    mismo registro y evitar posibles complicaciones en el almacenamiento
	    de los datos. Almacena la información de los minutos en la variable linea
	    la cual se pasa como parámetro en la función sscanf.*/
	    gets(linea);
	    /*La función sscanf() es similar a la función scanf() la diferencia es que
	    en lugar de tomar los datos de la entrada, los toma del propio programa.
	    Normalmente se utiliza para obtener los datos de una variable que se ha obtenido 
	    bien de la entrada o de un fichero o de una base de datos.
	    Nosotros la utilizaremos para explicar cómo funciona scanf() ya que permite que 
	    los datos se mantengan en el propio programa, cosa que no ocurre cuando los datos 
	    se introducen desde el teclado.Por ejemplo:
	    sscanf("12, 34, 45", "%d, %d, %d", &x, &y, &z);
	    En la instrucción anterior, la cadena "12, 34, 45" contiene los valores que se 
	    asignarán a las variables x, y, y z. Es decir, la instrucción anterior es equivalente 
	    a las siguientes instrucciones de asignación: x = 12; y = 34; z = 45;
	    Normalmente, cuando hay que asignar un valor a una variable, se utilizan las instrucciones 
	    de asignación, pero cuando los datos no proceden del propio programa, sino que proceden 
	    de la entrada del teclado, entonces no puede utilizarse la instrucción de asignación y 
	    tiene que utilizarse una instrucción similar a la siguiente:
	    scanf("%d, %d, %d", &x, &y, &z);*/
	    sscanf(linea, "%i", &mis_cds.cd[mis_cds.cantidad].duracion.minutos);
	    printf("Segundos: ");
	    gets(linea);
	    sscanf(linea, "%i", &mis_cds.cd[mis_cds.cantidad].duracion.segundos);
	    printf("Año: ");
	    gets(linea);
	    sscanf(linea, "%i", &mis_cds.cd[mis_cds.cantidad].anio);
	      //desde aqui empieza mi código
        printf("INTRODUCE EL NUMERO DE CANCIONES: ");
         gets(linea);
	    sscanf(linea, "%i", &mis_cds.cd[mis_cds.cantidad].canciones);
       	 printf("\n");

	   //inicio del ciclo para agragr canciones con su respectiva informacion
	    for(i=0;i<         mis_cds.cd[mis_cds.cantidad].canciones       ;i++)
		{
	    printf("escribe titulo de cancion num %d: ",i+1);
	     gets(infoDisco.cancion[infoDisco.canciones].titulo);
	      printf("escribe minutos que dura cancion num %i: ",i+1);
	      gets(linea);  
	    sscanf(linea, "%i", &infoDisco.cancion[infoDisco.canciones].duracion.minutos);
	    
	    printf("escribe segundos que dura cancion num %i: ",i+1);
	      gets(linea);  
	    sscanf(linea, "%i", &infoDisco.cancion[infoDisco.canciones].duracion.segundos);
	    printf("\n");
		}
		printf("EL DISCO SE ANADIO EXITOSAMENTE!!");
		
	mis_cds.cantidad++;	
	  }
	break;
	//antes de escoger otra opcion necesito que me aparezca el menu  nuevamente
      case 2: // Listar todo.
	for(i=0; i<mis_cds.cantidad; i++)
	  printf("%i El album: %s \n  Del artista: %s \n  Con una duración de: (%i:%i) \n  Del año: %i\n  Con %i canciones\n", i+1, mis_cds.cd[i].titulo,mis_cds.cd[i].interprete,mis_cds.cd[i].duracion.minutos,mis_cds.cd[i].duracion.segundos,mis_cds.cd[i].anio,mis_cds.cd[i].canciones);
	break;

      

      case 4: //Borrar un registro
	printf("Título: ");
	gets(titulo);
	printf("Intérprete: ");
	gets(interprete);
	for(i=0;i<mis_cds.cantidad;i++)
	  {
	    /*La función compara dos cadenas de texto, en este caso compara la cadena 
	      que contiene la información de titulo con el miembro titulo de un disco y de manera similar
	      compara el interprete con el miembro interprete de un disco, la función strcmp regresa 0 si
	      las dos cadenas son iguales, devuelve menor que cero si cadena1 es menor que cadena2 y 
	      devuelve mayor que cero si cadena1 es mayor que cadena2.*/
	    if(strcmp(titulo,mis_cds.cd[i].titulo)==0 && strcmp(interprete,mis_cds.cd[i].interprete)==0)
	      break;
	  }
	/*Si las dos cadenas fueron iguales elimina el registro y solo resta eliminar el índice del arreglo
	  en donde se encontraba la información para que deje de considerarlo*/
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
  while(opcion != 5);//repiteme todos los casos hasta que la opcion sea diferente de "5", fin del pograma
  
  printf("Gracias por usar nuestro programa.\n");
  
  return 0;
}//fin_funcionn_princippal................................................................................................


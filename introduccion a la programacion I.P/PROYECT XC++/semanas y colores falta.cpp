#include<stdio.h>
#include<stdlib.h>
main()
{
char x, y;


printf("Programa que indica el dia de la semana ");
printf("\n\nintroduce una vocal: ");
scanf("%c",&x);

switch(x)
{
	case 'a':
	printf("\nEl dia es lunes ");
	
break;


case 'e':
printf("\nEl dia es martes");
break;

case'i':
printf("\nEl dia es miercoles");
break;


case 'o':
printf("\nEl dia es miercoles");
break;


case'u':
printf("\nEl diea es juevez,mañana sera viernes");
break;

default:

printf("\nNO JODAS EL CARACTER QUE INTRODUJISTE NO ES VOCAL VUELVE A INTENTARLO");	

break; 
	
	}	
	

do{
	
	printf("\n\n Escoje el numero del menu de la combinacion de colores para formar uno nuevo");
	printf("\n1. amarillo-rojo");
	printf("\n2. azul-rojo");
	printf("\n3. amarillo azul");
	printf("\n4, Salir\n\n Numero: ");
	scanf("%s",&y);
	
		
	switch(y){
		
	case'1':
	printf("\nEl nuevo color es anaranjado");
	break;	
		
	case '2':
	printf("\nEl nuevo color es morado");
	
    break;
	
	case'3':
	printf("\nEl nuevo colo es verde");	
		
	break;
	
	case'4':
	
			break;
	
	default: 
	printf("El numero que insertaste esta fuera de rango");
	break;
	
	}
	
	  }while(y!=4);
	  
	  return 0;
}

//pruebita de cadenas usando strcat y strcpy
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(){
/*	Esto es manualmente
	char cadena1[]="My nombre es gustavo";
	char  cadena2[]=", y mi apellido es pozos";
	char cadena3[50];
	
	
	
	
strcpy(cadena3, cadena1);
strcat(cadena3,cadena2);
printf("El resultado de la cadea es: %s",cadena3);
	
*/
# define capacidad 80
char cadena1[capacidad];
char cadena2[capacidad];
char* cadena3;

printf("\nDame una cadena");
gets(cadena1);
printf("\nDame otra cadena");
gets(cadena2);

cadena3 = (char*)malloc((strlen(cadena1)+strlen(cadena2))*sizeof(char));//ya apartamos memoria dinamica

strcpy(cadena3,cadena1);
strcat(cadena3,cadena2);

 printf("\nLa cadena concatenada es: \n %p \n",&cadena3);

free(cadena3);

cadena3=  NULL;


getchar();
fflush(stdin);

	
	
}

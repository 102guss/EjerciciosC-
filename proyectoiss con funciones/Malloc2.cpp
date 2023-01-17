#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define CAPACIDAD 80

int main(void)
{
    char cadena1[CAPACIDAD+1], cadena2[CAPACIDAD+1];
    char* cadena3;

    printf ("Dame una cadena: "); 
    gets(cadena1);
    
    printf ("Dame otra cadena: "); 
    gets(cadena2);

    cadena3 = (char* )/*...*/ malloc(  (strlen(cadena1)+strlen(cadena2)+1) * /*....*/sizeof(char)  );

    strcpy(cadena3, cadena1);//adena uno se copia en cadena 3, q es la q` está vacia
    strcat(cadena3, cadena2);//"strcat", te añade la cadena que tu quieras ponerle

    printf ("Resultado de concatenar ambos: \n%s\n", cadena3);

    free(cadena3);
    
    cadena3 = NULL;

    return 0;
}

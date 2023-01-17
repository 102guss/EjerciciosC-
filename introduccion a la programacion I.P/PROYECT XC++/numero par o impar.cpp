#include <stdio.h>
main()
{
	
int x, R;

printf("\n \t \tPrograma que identifica si el nimero es par o impar.\n\n  \n ");

printf("introduzca un numero: ");

scanf ("%d", & x);

R=x % 2;

if (R==0)


printf("\nEl numero %d es par.", x);


else 


printf("\nEl numero %d es impar.", x);



fflush(stdin);
getchar();
}


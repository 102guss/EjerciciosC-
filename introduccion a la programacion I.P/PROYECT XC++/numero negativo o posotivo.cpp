#include <stdio.h>
main()
{
	
int x, R;

printf("\n \tPrograma que identifica si algun numero es positivo o negativo.\n\n  \n ");

printf("introduzca un numero: ");

scanf ("%d", & x);

R=x > 0;

if (x>0)



printf("\nEl numero %d es positivo.", x);


else 


printf("\nEl numero %d es negativo.", x);



fflush(stdin);
getchar();
}


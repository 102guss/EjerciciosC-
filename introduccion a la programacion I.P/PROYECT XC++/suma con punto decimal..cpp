#include <stdio.h>

float x, y, R;

main()
{
printf("\t \t Calcula la suma de dos numeros decimales \n");
	
printf("\n \n \n Introduce el primer numero decimal: ");	
scanf("%f",& x);

printf("\n \n Introduce el segundo numero decimal: ");
scanf("%f",& y);

R=(x+y);


printf("\n \n El resultado es: %.1f ", R);


fflush(stdin);
getchar();
  
}
  

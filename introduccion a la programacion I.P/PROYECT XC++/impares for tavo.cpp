#include<stdio.h>
main()
{
int impares,suma=0;
printf("\t programa que calcula los numeros impares menores a 100\n");


for (impares=0; impares<100; impares++)


if (impares%2!=0)// para campiar a numeros pares solo modificamos el cero por el uno.


printf("\t%d",impares);

suma=suma+impares/2;//hay que verificar y modificar.

printf("\n la suma delos numeros imares es: %d",suma);

fflush(stdin);
getchar();
}

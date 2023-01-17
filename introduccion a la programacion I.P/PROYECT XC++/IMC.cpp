#include <stdio.h>


main()

{
float altura, peso, IMC;
 
 printf ("\t Programa que calcule el indice corporal \n");

 printf ("\n Introduce tu Peso \n");
 scanf ("\n%f", & peso);
 
 
 printf ("introduce tu altura:");
 scanf ("\n%f", & altura);
  
  IMC = peso/(altura*altura);
 
   if (IMC<=16)
 
   printf ("\nCriterio de Ingreso al Hospital \n");
 
  if (16<IMC&&IMC<=17)
 
 printf ("\n Infrapeso \n");
 
  if (17<IMC&&IMC<=18)
 
 printf ("\n Diagnostico Bajo de Peso \n");
 
  if (18<IMC&&IMC<=25)
 
 printf ("\n Peso Normal (Saludable)\n");

 if (25<IMC&&IMC<=30)

printf ("\n Sobre Peso (Obvesidad de grado 1)\n");

 if (30<IMC&&IMC<=35)

printf ("\n Sobre Peso Cronico(Obvesidad de Grado 2)\n");

 if (35<IMC&&IMC<=40)

printf ("\n Obvesidad Premorvida (Obvesidad de Grado 3)\n");


 if (40<=IMC)
 
printf ("\n Obvesidad Morvida (Obvesidad de Grado 4)\n"); 
 
fflush(stdin);
getchar(); 
 

 
}

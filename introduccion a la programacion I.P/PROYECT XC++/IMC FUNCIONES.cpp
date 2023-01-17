#include <stdio.h>
#include <math.h>


	float IMC (float m, float e)
	{
		return m/(pow(e,2));
	}
	
	void Presentacion ()
	{
		printf("\n PROGRAMA QUE CALCULA EL INDICE DE MASA CORPORAL\n");
	}
	
	void Resultado(float r)
	{
		printf("\n El IMC es: %.2f", r );
	}
	
	
	main ()
	{
	
	float masa, estatura, imc;
	
	Presentacion ();
	
	printf("\nIngrese su peso en kg: ");
	scanf("%f", & masa);
	printf("\nIngrese su estatura en metros y centimetros: ");
	scanf("%f", & estatura);
	
	imc= IMC(masa, estatura);
	
	Resultado (imc);
	
	 if (imc<=16)
 
   printf ("\n Delgadez severa \n");
 
 else if (16<imc&&imc<=17)
 
 printf ("\n Delgadez moderada \n");
 
 else if (17<imc&&imc<=18)
 
 printf ("\n Delgadez leve \n");
 
 else if (18<imc&&imc<25)
 
 printf ("\n Normal\n");

else if (25<imc&&imc<30)

printf ("\n Pre Obeso\n");

else if (30<imc&&imc<35)

printf ("\n Obesidad Leve\n");

else if (35<imc&&imc<40)

printf ("\n Obvesidad Media \n");


else if (40<=imc)
 
printf ("\n Obvesidad Morvida \n"); 
	fflush(stdin);
	getchar();
}

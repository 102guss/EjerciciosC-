#include<stdio.h>
#include<math.h>
double Hipotenusa(double ladoA, double ladoB){

return sqrt(ladoA*ladoA+ladoB*ladoB);
}

void Presentacion(){
printf("Programa basico de trigonomitria");
printf("\nAutor: MA\n\n");	
}

void MostrarHipotenusa(double valor){
	printf("\nLa hipotenusa vale %.2lf",valor);
}

main()
{
	
double lado1, lado2,hip;
Presentacion();
printf("\nintroduzca el primer lado: ");
scanf("%lf",&lado1);
	
printf("\nintroduzca el primer lado: ");
scanf("%lf",&lado2);

hip=Hipotenusa(lado1,lado2);
MostrarHipotenusa(hip);
		
fflush(stdin);
getchar();	
		
}

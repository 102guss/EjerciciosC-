

#include <stdio.h>


using namespace std;

int main( int argc, char*argv []){
	


enum tipollamada {internacional=1, nacional, local} llamada;



float minutosD, minutosA, costA, importe,costmas,
costo3m, lasp100, costoA;

printf("\t\tPROGRAMA QUE CALCULA EL PRECIO DE LLAMASAS REALIZADAS\n");



printf("\n INGRESE EL TIPO DE LLAMADA: " );


printf ( "\n\n 1.-Internacional\n\n 2.-Nacional\n\n 3.-Local ");

scanf("%d", & llamada);

printf("Ingrese la duracion de la llamada en minutos: ");

scanf("%f", & minutosD);



if (minutosD >=3){
minutosA = minutosD-3;

}else{
	minutosA= 0; 
}



switch (llamada){

case internacional:

costo3m = 7.59;

costA = 3.03;
break;


case nacional:

costo3m = 1.20;

costA= 0.48;

break;

case local:
	

lasp100 = 0;

costoA = 0.60;


break;

default:
	
	puts("ERROR: Tipo fuera de rango");
	
	break;
	
}
costmas = (minutosA)*(costA);

importe = costo3m + costmas;
	

	
	printf("Tipo Llamada: %d\n", llamada);
	
	printf("Minutos duracion: %.2f\n",minutosD);
	
	printf("Minutos adicionales: %.2f\n",minutosA);
	
	printf("Total a pagar: %.2f\n", importe);
	

	fflush(stdin);
	
	getchar();
		
	
}

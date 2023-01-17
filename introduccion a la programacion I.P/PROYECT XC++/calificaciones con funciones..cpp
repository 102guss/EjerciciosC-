#include <stdio.h>

int main(){


float calificaciones[5]; //numero de elementos q tendrà el arreglo
float promedio=0; // se va a ir acumulando las acumulatorias de las calificaciones

printf("\t\tprograma que calcula el promedio de 5 calificaciones..\n");

for(int i=0; i<5; i++){
	
	printf("\n dame la calificacion  %d: ", i+1);
	scanf("%f", & calificaciones[i]);
	
	promedio+= calificaciones[i];
	printf("\n");
	
	
}

printf("el promedio de las calificaciones es:  %.1f\n", promedio/5);

return 0;

}
	
	
	
	

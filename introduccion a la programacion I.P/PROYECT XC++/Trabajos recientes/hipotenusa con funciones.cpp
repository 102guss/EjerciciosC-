#include<stdio.h>
#include<math.h>

double Hipotenusa(double ladoA, double ladoB){
return sqrt(ladoA*ladoA+ladoB*ladoB);

}
main(){
double lado1,lado2, hip;
printf("\nintroduzca el primer lado: ");
scanf("%lf",&lado1);	
	
printf("\nintroduzca el segundo  lado: ");
scanf("%lf",&lado2);		
	
hip=Hipotenusa(lado1,lado2);
printf("\nLa hipotenusa vale %.2lf",hip);
	
fflush(stdin);
getchar();	
	
}

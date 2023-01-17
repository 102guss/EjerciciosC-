#include<stdio.h>


int Suma(int numeroA, int numeroB)
{
return (numeroA+numeroB);

}

main(){
int numero1,numero2,sumita;
printf("\nintroduzca el primer numero: ");
scanf("%d",&numero1);	
	
printf("\nintroduzca el segundo  numero: ");
scanf("%d",&numero2);		
	
sumita=Suma(numero1,numero2);
printf("\nLa suma es: %d",sumita);
fflush(stdin);
getchar();	
	
}

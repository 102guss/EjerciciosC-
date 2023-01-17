#include<stdio.h>


int Suma(int numeroA, int numeroB)
{
return (numeroA+numeroB);
}

int Multiplicacion(int numeroA, int numeroB)
{
return (numeroA*numeroB);
}




main(){
int numero1,numero2,sumita,multi;
printf("\nintroduzca el primer numero: ");
scanf("%d",&numero1);	
	
printf("\nintroduzca el segundo  numero: ");
scanf("%d",&numero2);		
	
sumita=Suma(numero1,numero2);
printf("\nLa suma es: %d",sumita);

multi=Multiplicacion(numero1,numero2);
printf("\nLa multiplicacion es: %d",multi);



fflush(stdin);
getchar();	
	
}
//tarea hacer munu con esto. y aparte hacer la chicharronera.

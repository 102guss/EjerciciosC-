# include <stdio.h>

int main()
{
int x, R;
printf("\tDada una cantidad, obtener el numero de monedas y billetes. \n \n");

printf("\t Escribe una cantidad :$");
scanf ("%d",&x);
R=x/10;

printf("\ntienes %d monedas de $10 \n\n", R);
R=x/20;

printf("tienes %d billetes de $20 \n\n", R);
R= x/50;

printf("tienes %d billetes de $50 \n\n", R);
R= x/100;

printf("tienes %d billetes de $100 \n\n", R);
R= x/200;

printf("tienes %d billetes de $200 \n\n", R);
R= x/500;

printf("tienes %d billetes de $500 \n\n", R);

}







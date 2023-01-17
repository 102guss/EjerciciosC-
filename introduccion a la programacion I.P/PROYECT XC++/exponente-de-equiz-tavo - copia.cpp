#include <stdio.h> 
#include <math.h> 

int main () 
{ 
int x,y,total; 

printf ("\t\t\televar un numnero al cuadrado\n"); 

printf ("\ninsertar el numero: "); 
scanf ("%d", &x); 
printf ("insertar el exponente: "); 
scanf ("%d", &y); 

total=pow( x, y );
printf ("\nel resultado es: %d",total); 

fflush(stdin);
getchar();
}

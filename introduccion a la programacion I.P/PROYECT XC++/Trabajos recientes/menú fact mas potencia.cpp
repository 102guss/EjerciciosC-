#include <stdio.h>
#include<math.h>
main()
{
	int opcion,x,y,total,c,factorial;
char l;

printf("\n elija la opcion que desee\n");
printf("\n1-elevar un numero a un exponente\n2-calcular su factorial del numero\n\n: ");
 
scanf("%c",&l);
 
 
 
 
switch(l)
 {
  
 case '1':
 	printf ("\ninsertar el numero: "); 
scanf ("%d", &x); 
printf ("insertar el exponente: "); 
scanf ("%d", &y); 

total=pow( x, y );
printf ("\nel resultado es: %d",total);
   
     
    break;
     
    case '2':
         
    printf("\n\ingresa el numero para calcular su factorial: ");
    scanf("%d",&x);
    c=1;
    factorial=1;
    do{
	
	factorial=factorial*c;
	c++;
	}
	while(c<=x);
	printf ("\nel fatorial es: %d",factorial);
	 break;
         
         
     
    default:
         
        printf ("\n El numero que introdujo, no esta en el rango de los dias de la semana.");
         
         
        }
         
        fflush (stdin);
         
        getchar();
         
        }

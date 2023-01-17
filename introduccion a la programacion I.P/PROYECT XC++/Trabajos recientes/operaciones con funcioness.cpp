#include<stdio.h>

 int Suma(int numeroA, int numeroB)
{
return (numeroA+numeroB);
}
 
 
  int Resta(int numeroA, int numeroB)
{
return (numeroA-numeroB);
}
 
 
 
 
int Multiplicacion(int numeroA, int numeroB)
{
return (numeroA*numeroB);
}

int Divicion(int numeroA, int numeroB)
{
return (numeroA/numeroB);
}
 
 
main(){
int numero1,numero2,sumita,multi,divi,C,MENU,restita;
  
do{
C=1;
C++;
printf ("\n Introduzca el primer numero: ");
scanf ("\n%d", & numero1);
  
printf ("\n Introduzca el segundo numero: ");
scanf ("\n%d", & numero2);

printf ("\n Elija una opcion \n\n");

  
        printf("1.- Sumar\n");
        printf("2.- Restar\n");
        printf("3.- Multiplicar\n");
        printf("4.- Dividir\n");
        printf("0.- Salir\n");
        printf("Indica la opcion: ");
        scanf("%d", &MENU);
      
    
switch(MENU)
        {
            case 1:
            
            sumita=Suma(numero1,numero2);
            printf("\nLa suma es: %d\n",sumita);
            break;
 
             
            case 2: 
            
            restita=Resta(numero1,numero2);
            printf("\nLa Resta es: %d\n",restita);
            break;
 
            
            
            case 3: 
            
            multi=Multiplicacion(numero1,numero2);
            printf("\nLa multiplicacion es: %d\n",multi);
            break;
 


            case 4:
            	
            	divi=Divicion(numero1,numero2);
                printf("\nLa Divicion es: %d\n",divi);
                break;

            if (numero1 < numero2); {
            printf("\n porque no  acepta decimales:\n");
             }
            
           
            
            case 0: printf("\nhasta la proxima\n");break;
            
            default: ("\n inserta una opcion viable.");break;
        }
  
}while(MENU!=0);
 
return 0;
  
fflush (stdin);
getchar();
  
}


# include <stdio.h>
main()
{
int N1, N2, MENU, C;
 
do{
C=1;
C++;
printf ("\n ESCRIBE EL PRIMER NUMERO \n");
scanf ("\n%d", & N1);
 
printf ("\n ESCRIBE EL SEGUNDO NUMERO \n");
scanf ("\n%d", & N2);
 
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
             printf("Suma: %d\n", (N1+N2));break;
            case 2: printf("Resta: %d\n", (N1-N2));break;
            case 3: printf("Multiplicacion: %d\n", (N1*N2));break;
            case 4: printf("Dividir: %d\n", (N1/N2));
            if (N1<=N2); 
            printf("NO ES DIVISIBLE:\n");break;
            printf(": %d\n", (N1/N2));break;
            case 0: printf("\nhasta la proxima\n");break;
            default: ("\n inserta una opcion viable.");break;
        }
 
}while(MENU!=0);

return 0;
 
fflush (stdin);
getchar();
 
}

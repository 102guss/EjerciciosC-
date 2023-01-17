#include<stdio.h>
main 
()
{
	int n1,n2,suma, resta,multi,div,c,opcion;
	
	c=1;
	do{
		printf("\n Que operacion desea realizar\n");
		printf("\n1.suma\n 2.resta\n 3. multiplicacion\n 4.division\n 5. salida\n");
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1: 
			printf("\n ingrese los numeros a sumar separados por un espacio\n");
				scanf("%d %d",&n1,&n2);
				suma=n1+n2;
				printf("\n la suma de %d+%d=%d",n1,n2,suma);
				
				break;
		
		case 2:
		
		printf("\n\n\t Ingresa dos numeros a restar, separados por espacio: ");
		scanf("%d %d",&n1,&n2);
		
		resta=n1-n2;
		
		printf("\n\n\t La resta de %d - %d = %d",n1,n2,resta);
			break;
		
		
		case 3:
		
		printf("\n\n\t Ingresa dos numeros a multiplicar, separados por espacio: ");
		scanf("%d %d",&n1,&n2);
		
		multi=n1*n2;
		
		printf("\n\n\t La multiplicacion de %d * %d = %d",n1,n2,multi);
		break;
		
		case 4 :
			printf("\n\n\t Ingresa dos numeros a dividir, separados por espacio: ");
		scanf("%d %d",&n1,&n2);
		
		if (n1>n2)
		{
	
		
		div=n1/n2;
		
		printf("\n\n\t La divicion de %d / %d = %d",n1,n2,div);
		
	    }
		
		else
		
		{
			
		printf("\n\n\t La divicion se puede realizar");	
	}
	
	break;
		
		
		case 5:
		
		printf("\n\n\t Finlizado. ");
	
	}
	
	
   }while(opcion==1||opcion==2||opcion==3|| opcion==4);
	
	getchar();
}

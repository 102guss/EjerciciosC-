#include <stdio.h>

int num1,num2,opcion,resultado;

int main(){
	
printf("\nCALCULADORA");
printf("\n\n Ingrese el primer nuero: ");
scanf("%d",&num1);
printf("\n Ingrese el segundo numero: ");
scanf("%d",&num2);

 do{
	
	printf("\n\n Indique la opcion que desea relizar\n ");
	printf("\n 0-salir");
	printf("\n 1-sumar");
	printf("\n 2-restar");
	printf("\n 3-multiplicar");
	printf("\n 4-dividir");
	printf("\n\n opcion: ");
	scanf("%d",&opcion);
	
	 switch(opcion){
		
		case 1: 
		
		resultado=num1+num2;
		printf("\nLa suma es: %d",resultado);
	
        break;
        
    	case 2: 
		
		resultado=num1-num2;
		printf("\nLa resta es: %d",resultado);
	
        break;
        
        	case 3: 
		
		resultado=num1*num2;
		printf("\nLa multiplicaion es : %d",resultado);
	
        break;
        
        	case 4: 
        	
        	if(num2==0){
       	printf("\nLa divicion estre cero no es posible");
			}
			
			else{
		resultado=num1/num2;
		printf("\nLa divicion es : %d",resultado);	
				
			}
		
        break;
        
        default:
        	
        	if (opcion==0){
        	
			}
			else{
				printf("\n\nopcion fuera de rango");
			
			}
        		
       	break;
    
	}//fin de "switch"
		
  }while(opcion!=0);
			
}//fin de la funcion "main"

#include <stdio.h>
main()
{
char l;
printf("\n \t \t \t INGRESE EL DIA DE LA SEMANA \n");

printf("\n introdusca un numero del uno al siete: ");

scanf("%c",&l);




switch(l)
 {
 
 case '1':
 	printf("\t \n \ El dia es lunes\n");
 	
    break;
 	
    case '2':
    	
   	printf("\n\El dia es martes");
 	
	break;
 		
 		 case '3':
 	printf("\n El dia es miercoles \n");
 	
    break;
    
    		 case '4':
 	printf("\n El dia es juevez \n");
 	
    break;
    
    
    		 case '5':
 	printf("\n El dia es viernes\n");
 	
    break;



		 case '6':
 	printf("\n El dia es sabado\n");
 	
    break;


	 case '7':
 	printf("\n El dia es domingo\n");
 	
    break;


    
    default:
    	
    	printf ("\n El numero que introdujo, no esta en el rango de los dias de la semana.");
    	
    	
    	}
    	
    	fflush (stdin);
    	
    	getchar();
    	
    	}



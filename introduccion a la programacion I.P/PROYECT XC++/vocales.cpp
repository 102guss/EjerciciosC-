#include <stdio.h>
main()
{
char l;
printf("\n INGRESE UNA LETRA : ");

scanf("%c",&l);

switch(l)
 {
 
 case 'a':
 	printf("\t \t es vocal \n");
 	
    break;
 	
    case 'e':
    	
   	printf("\n es vocal");
 	
	break;
 		
 		 case 'i':
 	printf("\n es vocal \n");
 	
    break;
    
    		 case 'o':
 	printf("\n es vocal \n");
 	
    break;
    
    
    		 case 'u':
 	printf("\n es vocal \n");
 	
    break;
    
    
    
    
    default:
    	
    	printf ("\n no es vocal \n");
    
    	
    	}
    	
    	fflush (stdin);
    	
    	getchar();
    	
    	}



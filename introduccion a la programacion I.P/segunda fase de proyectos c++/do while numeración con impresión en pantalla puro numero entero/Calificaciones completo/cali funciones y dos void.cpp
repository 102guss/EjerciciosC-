  //promediar cinco calificaciones con funciones y dos aciiones(void)
  #include<stdio.h>
  
    float PROMEDIO( float CAL1, float CAL2, float CAL3, float CAL4, float CAL5){
  	               //Parametros formales

  	 return((CAL1+CAL2+CAL3+CAL4+CAL5)/5);
  	 
     }
     void presentacion(){
     	
     	printf("\nPrograma que calcula el promedio de cinco calificaciones\n");
	 }
   
   
    void Mostrarresultado( float valor){
    	
    	 printf("\nEl promedio es: %.1f",valor);
    	
	} 
  
   main(){
   	float cal1,cal2,cal3,cal4,cal5;
   	float promedio;
   	
   	 presentacion();
	    
   	 printf("\nIngrese la primer calificacion: ");
   	 scanf("%f",&cal1);
    
     printf("\nIngrese la segunda calificacion: ");
   	 scanf("%f",&cal2);
   	 
   	 printf("\nIngrese la tercera calificacion: ");
   	 scanf("%f",&cal3);
   	 
   	 printf("\nIngrese la cuarta calificacion: ");
   	 scanf("%f",&cal4);
   	 
   	 printf("\nIngrese la quinta calificacion: ");
   	 scanf("%f",&cal5);
   	 
   	  promedio=PROMEDIO(cal1,cal2,cal3,cal4,cal5);
   	  
   	   Mostrarresultado(promedio);
   	  
   	  
   	
   
   	fflush(stdin);
   	getchar();
   }


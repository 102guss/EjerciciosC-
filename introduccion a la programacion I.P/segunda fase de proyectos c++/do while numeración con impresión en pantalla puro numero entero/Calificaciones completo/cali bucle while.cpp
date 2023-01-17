//Programa que calcula el promedio de cinco calificaciones usando blucle"while".
  #include<stdio.h>
  main()
  {
    int contador,acumuladorsuma;
	float calificaciones, promedio;
	
	acumuladorsuma=0;
	contador=1;
	while(contador<=5){  //numero de veces q se repitira el contador.
		
		printf("\nEscribe la calificacion %d: ",contador);
		scanf("%f",&calificaciones);
		contador++;  //incremento del contador.
		
		acumuladorsuma+=calificaciones;	
	}	
	
	
	promedio=acumuladorsuma/5;
	    printf("\nEl promedio final es: %.1f",promedio);
		
   fflush(stdin);
   getchar();	
   }

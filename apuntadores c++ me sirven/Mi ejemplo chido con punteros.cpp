//intercambiando valores a variables por medio de referencias utlizando funciones
#include<stdio.h>


 void intercambiavalor(int *, int *);



int a=10;
int b=20;
int c =30;

int main(){

printf("\nEl valor sin modificar de la variable a es: %d",a);
printf("\nEl valor sin modificar de la variable b es: %d",b);


intercambiavalor(&a,&b);

printf("\n\n");
printf("\nIntercambiando los valores por referencia...\n");
printf("\nEl valor modificado de la variable a es: %d",a);
printf("\nEl valor modificado de la variable b es: %d",b);
}




 void intercambiavalor(int *aa, int *bb){      //quiero b=10 , a=20
	
	int cc;                                     //El valor "cc", es el intermediario
	
	cc=*aa;
	*aa=*bb;
	*bb=cc;	   
		
}




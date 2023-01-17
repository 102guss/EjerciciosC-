# include <stdio.h>

main(){
	
int cont, acu=0, num, n;
printf("\t programa que suma cierta cantidad de numeros");

printf("\n\ninglese la cantidad de numeros a sumar: ");
scanf("%d", & n);




for(cont=1;cont<=n; cont++){


printf("\n inglese numero: ");
scanf("%d", & num);


acu=acu+num;	
	
}	
	
	
printf("\n la suma total es: %d", acu);	

	
	
	
	
fflush(stdin);
getchar();

	
	
}



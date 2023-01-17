# include <stdio.h>
main(){
	int n,c,suma;
	printf("\n Hasta  que  numero  quiere  sumar \n");
	scanf("%d",& n);
	
	c=1;
	suma=0;
	
	do{
		suma=suma+c;
		c++;}
		
		while (c<=n);
		printf("\n La suma es :%d",suma);
		fflush(stdin);
		getchar();
}

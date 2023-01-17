# include <stdio.h>
main()
{
	int n,c,tabla;
	
	printf("\n\t PROGRAMA  QUE  IMPRIMA  LA  TABLA  SEL  SEIS \n");
	
	c=1;
	n=6;
	
    do
    {
    	
    tabla=n*c;
    printf("\n%d*%d=%d\n",n,c,tabla);
	c++;
	
}
	while(c<=10);
		
		
		fflush(stdin);
		getchar();
		
	
}

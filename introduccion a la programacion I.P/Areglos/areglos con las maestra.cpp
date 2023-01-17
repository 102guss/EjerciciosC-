#include <stdio.h>
main () {
	int A1[5],c, A2[5] ;
	for (c=1;c<=5; c++) {
	 printf ("\n Ingrese el valor \n");
		scanf ("%d",& A1[c]);}
		c=1;
		while (c<=5) {
			A2[c]=A1[c]+5;
			printf ("El resultado es: %d\n", A2[c] );
			c++;}
			fflush (stdin);
			getchar ();
			
			
		}

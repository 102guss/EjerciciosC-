#include <stdio.h>
int factorial(int e,int r){
	int t=1;
	while(e<=r){
		t=e*t;
		e++;
	}
	return t;
}
main()
{
	int f=1,c=1,n;
	printf("ingrese el numero que desea su factorial:");
	scanf("%d",&n);
	f=factorial(c,n);
	printf("\n el factorial del numero es: %d",f);
	fflush(stdin);
	getchar;
}

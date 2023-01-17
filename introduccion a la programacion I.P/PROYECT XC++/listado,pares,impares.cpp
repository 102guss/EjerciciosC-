#include<stdio.h>
int main(){
	int c ;
   for(c=0;c<=15;c++)      {       
	printf("%d\n",c);
	}
	
	 printf("\nLos numeros pares son: ");
	 
	 
	  for(c=15;c>0;c--){
	 	if (c%2==0) 
	 	  
       printf("%d,",c);	
	 } 
	 
	 
	  printf("\n\nLos numeros impares son: ");
	 
	 
	 for(c=1;c<=15;c++){
	 	if (c%2==1) 
	 	   printf("%d,",c);	
	 }
	 
	 
	 fflush(stdin);
     getchar();	 	
}


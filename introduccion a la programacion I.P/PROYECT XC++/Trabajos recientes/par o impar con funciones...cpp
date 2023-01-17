//meter un numero y que diga si es par o impar con funsiones
# include<stdio.h>
 
int Par_oimpar( int R ){
 
 
 
if (R%2==0)
  
  
printf("\nEl numero %d es par.", R);
  
  
else
  
  
printf("\nEl numero %d es impar.", R);
  
  
 return (R%2);
}
 
main(){
int r,resultado;
printf("\nPrograma que identifica si el numero es par o inpar ");
printf("\nintroduzca un numero: ");
scanf("%d",&r);
     
      
resultado=Par_oimpar(r);
 
      
fflush(stdin);
getchar();  
      
}

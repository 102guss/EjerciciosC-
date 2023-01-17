       #include<stdio.h>           //tabla de multiplicar compuesta, ciclo anidado
int main()
{
 int numero=1, result=0;	
 
   for(int j=1; j<=3; j++){
   printf("\n");
   
 
       for(int i=1; i<=10; i++){
       result=numero*i;
       printf("\n %dx%d=%d",numero,i,result);
  	
       }  //fin primer for
    numero+=1;
   }//fin segundo for
 	
}// fin del main

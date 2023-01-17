#include<stdio.h>
main()
{
int sueldo, aumento,a,descuento;
printf("Programa que calcula el aumento del sueldo de un trabajador\nen una empresa.\n");
printf("\nSu sueldo base es de $125000 anuales ");
 
printf("\n\nIntrudusca los anos que lleva lavorando: ");
scanf("%d",&a);
 
if(a>=10){
 
descuento=125000*.10;
aumento=descuento+125000;
printf("\nsu aumento del 10 porciento es de : $%d",descuento);
printf("\nsu su sueldo total es de : $%d",aumento);
 }
  

if(a>5 && a<10){                                     
descuento=125000*.7;
aumento=descuento+125000; 
printf("\nsu aumento del 10 porciento es de : $%d",descuento);
printf("\nsu sueldo total es de : $%d",aumento);
}

if(a>3 && a<=5){                           
descuento=125000*.5;
aumento=descuento+125000;
printf("\nsu aumento del 10 porciento es de : $%d",descuento);
printf("\nsu sueldo total es de : $%d",aumento);
 }

if(a<=3){
descuento=125000*.3; 
aumento=descuento+125000; 
printf("\nsu aumento del 10 porciento es de : $%d",descuento);
printf("\nsu sueldo total es de : $%d",aumento);
}
 
 
fflush(stdin);
getchar();
}

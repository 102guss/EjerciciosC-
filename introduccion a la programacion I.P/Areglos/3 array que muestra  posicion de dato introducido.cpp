#include<stdio.h>
//Pograma que  muestra el dato introducido y su posicion dentro del arreglo.
main(){ //inicia la funcion main.

int i;
int datos[5];        //El arreglo consta de cinco espacios

for(i=0;i<5;i++){  // la variable "i" en donde toma el valor que le introduces se repetira cuatro veces   
                   // por que "i" empieza desde cero.
printf("Escriba un numero: ");
scanf("%d",&datos[i]); //El dato que introduzcas se guardara en el arrelo "datos".

}

for(i=0;i<5;i++){  //para mostrar la posocion del numero que el usuario ingreso
                   //se utiliza otro ciclo.
printf("\nPoscicion %d numero %d\n",i,datos[i]);


}
fflush(stdin);
getchar();


}

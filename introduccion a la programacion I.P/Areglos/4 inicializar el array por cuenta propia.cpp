#include<stdio.h>
//Pograma que  muestra el dato introducido y su posicion dentro del arreglo.


main(){                //inicia la funcion main.

int i;                    //inicializar el arreglo nosotros mismos
int datos[]{22,33,44,55};       //El arreglo consta de cuatro posiciones.

for(i=0;i<4;i++){ 
printf("\nPoscicion %d numero %d\n",i,datos[i]);


}
fflush(stdin);
getchar();


}


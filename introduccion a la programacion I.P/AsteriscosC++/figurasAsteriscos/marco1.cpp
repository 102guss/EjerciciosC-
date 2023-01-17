//marco de asteriscos
#include<stdio.h>
int numero,i,j,k,m;

int main(){
printf("introducde el numero de renglones del marco:");
scanf("%d",&numero);		//suponiendo q numero es=5

for(i=1; i<=numero;i++){ // se repite 5 veces en una sola fila
printf(" *");	// debo de poner dos espacios para  alcanzar el hbueco del salto de linea
}



for(j=1; j<=numero-2;j++){ //se repite 3 veces en columnas
printf("\n"); //un salto de linea son lo de dos espacios	
printf(" *");
	for(k=1; k<=numero-2;k++){//se repite 3 veces en filas
	printf("  ");//aqui estamos dando dos espacios
	}
printf(" *");


}

printf("\n");
for(m=1; m<=numero;m++){ // se repite 5 veces en una sola fila
printf(" *");	
}

}// fin del metodo main
//marco1 Terminado
//marco terminado por fin

//funcion intercambia, sina apuntadores
//ejemplo de tiempo con funciones con apuntadores

#include<stdio.h>


void funcionTiempo(int , int );                 //cabecera

int main(){
	int minutos;
	int segundos;
	int horas;
	
	printf("\nDame  los minutos: ");
	scanf("%d",&minutos);
	printf("\nDame  los segundos: ");
	scanf("%d",&segundos);
	
	
funcionTiempo( minutos, segundos);                                                     //solo en tiempo de ejecucion se modificaron los minutos y segundos

	printf("\n\n%d horas  con %d minutos  y  %d segundos ",horas, minutos,segundos);   //las que introdujo inicialmente el usuario

 
	
}        //fin funcion main

void funcionTiempo(int min, int seg){
int segundosTotal;
int minutostemp;
int horas;


segundosTotal=7460;
minutostemp=  7460/60;
seg =  7460%60;

horas = minutostemp/60;

min =  minutostemp%60;

	printf("\n%d horas  con %d minutos  y  %d segundos ",horas, min,seg);

		
}

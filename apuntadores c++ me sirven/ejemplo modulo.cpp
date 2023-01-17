//ejemplo dem modulo
#include<stdio.h>
int main(){
	
int segundosTotal;
int minutostemp;
int horas;
int minutos;
int segundos;

segundosTotal=7460;
minutostemp=  7460/60;
segundos =  7460%60;

horas = minutostemp/60;

minutos =  minutostemp%60;


printf("%d horas  con %d minutos  y  %d segundos ",horas, minutos,segundos );
	
	
	


}


//continuacion del proyecto 2.2
//2.1continuacion del proyecto ISS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int npar(int *vectoor1, int tam);/*cabecera de la funcion, tambien puede ser asi "int npar(int vector1[], int tamano);" cambiando
el asterisco por corchetes en el argumento para que no me de errores a la hora de compilar*/

int *fun(int *vectooor1, int taaam);//cabecera funcion par

int impaar(int *veector1, int tamm);//cabecera funcion impar

int *fun_imp(int veectooor1[], int ttaaam);//cabecera funcion de numeros impar

int *factorial( int *vectorPares,int tamano ); //cabecera de la funcion factorial

//inicio de la funcion main....................................................................................................................................................
int main()
{
	
	int tamano=0;
	int i;
	int *var;
	int *var2;
	int *var3;
	int par;
	int impar;
	
	
printf("Ingrese el tamanio del vector: ");
scanf("%d",&tamano);
int vector1[tamano];

srand(time(NULL));



for(i=0; i<tamano;i++){//para generar los numeros aleatoreos de 0 hasta el 20 con la longitud especificada
	
	vector1[i]=  0+rand()%(20+1);
	printf("[%d] ",vector1[i]);//genera numeros aleatoreos en cada posicion i del areglo
	

}


                                                                                  //no se pasa  la referencia con & porq el vector en si ya es una referencia en la variable "vector1"
printf("\n\nEl numero de pares en el arreglo original es: %i",npar(vector1, tamano)); //manda a llamar a la primer funcion
printf("\n\n");
printf("Nuevo vector con numeros pares\n\n");
getchar();
var = fun(vector1, tamano);                                                                             //manda a llamar a la segunda funcion y le pasa la referencia del vector a otra variabepuntero
                                                                                                        //seria, la referencia de la funcion se la pasa a otra variable tipo puntero

for(i=0; i< npar(vector1, tamano) ;i++)
{
	printf("[%i] ", var[i]);                                                                     //Aqui imprime el vector con los numeros pares         
	
}

printf("\n\nEl numero de impares en el arreglo es: %i",impaar(vector1, tamano));
printf("\n\n");

var2 = fun_imp(vector1, tamano); //ahora tengo mi nuevo vector que contiene los numeros impares
for(i=0; i < impaar( vector1, tamano) ; i++)
{
		printf("[%i] ", var2[i]);
}

printf("\n\nEl nuevo vector con los numeros pares multiplicado por dos, es el siguiente\n\n");
//invocamos a la funcion factorial
var3 = factorial( var , tamano );//como invoco al vector de los pares?

for(i=0; i< npar(vector1, tamano); i++){
	
	printf("[%i] ", var3[i]);
	
}

getchar();

}
//fin de la funcion main....................................................................................................................................................

//hacemos una funcion que cuente la cantidad de numeros pares   //la funcion solo va retornar un valor entero normal

int npar(int *vectoor1, int taam)/*recibimos la direccion de memoria de un vector que se le est? pasando
nuestro vector original y recibimos un tama?o que en la funcion principal ya estar? definido*/

{
	int par = 0;
	
	int i;
	for(i=0; i<taam; i++)
	{	
		if(vectoor1[i]%2==0) /*se pone "vector1" por que es la definicion del principio de un vector. si pusieramos "*vector1", ya estariamos 
		apuntando a un apuntador de apuntadores, osea, a una matriz*/
          par++;                    //contador que indicar? la cantidad de numeros pares que abr? en el vector
	}
	  return par; //esta funcion solo retorna el numero de pares que hay en el array	
	
}
//..........................................................................................................................................................................
//funcion que me pasa los nummeros pares a otro vector
int *fun(int *vectooor1, int taaam){  //aqui si me va aretornar un apuntador  a un vector de enteros  //estoy trabajando con mi vector original atraves de *vectooor1
	
	int *nuevovector;  //es el que voy a retornar, pero sin asterisco
	int i;
	int j=0;
	
	nuevovector= (int *)malloc(   npar(vectooor1,taaam)   *sizeof(int));//apartame el tama?o necesario qu ocupa npar(funcion anterior) y asignaselo a nueovector
	
	for(i=0; i<taaam; i++){
		if(vectooor1[i] %2 == 0 )                                         //solo fijate en los pares
		{
			nuevovector[j]= vectooor1[i];                                 //si fue par, copiamelo a otro vector("nuevo vector")
			j++;                                                         //cada que se copia un elemento de un vector a otro incrementa j(posicion casilla) del nuevo vector
		}                                                                //de esa manera el nuevo vector se quedar? con los elementos necesarios sin desperdiciar espacio
		
	}  //fin for
			
	return nuevovector;                                              //me regresa la definicion de mi nuevo arreglo(la direccion de memoria(del 1er elemento) de mi arreglo de anteros)
	                                                                  
}
//................................................................................................................................................
//hacemos una funcion que cuente la cantidad de numeros impares

int impaar(int *veector1, int tamm)/*recibimos como parametro un apuntador que intuitivamente sabrmos que apuntara al inicio de 
nuestro vector original y recibimos un tama?o que en la funcion principal ya estar? definido*/

{
	int impar = 0;
	
	int i;
	for(i=0; i<tamm; i++)
	{	
		if(veector1[i]%2==1) /*se pone "vector1" por que es la definicion del principio de un vector. si pusieramos "*vector1", ya estariamos 
		apuntando a un apuntador de apuntadores, osea, a una matriz*/
          impar++;
	}
	  return impar;	
	
}
//................................................................................................................................................
//funcion que me pasa los nummeros impares a otro vector
int *fun_imp(int *veectooor1, int ttaaam){
	
	int *nuevovector;
	int i;
	int j=0;
	
	nuevovector= (int *)malloc(   impaar(veectooor1,ttaaam)   *sizeof(int));
	
	for(i=0; i<ttaaam; i++){//aqui estoy trabajando cn mi vector "original"
		if(veectooor1[i] %2 == 1 )
		{
			nuevovector[j]= veectooor1[i];//le paso solo los impares a mi nuevo vector
			j++;
		}
		
	}
			
	return nuevovector;	
	
}
//...............................................................................................................................................
/*Mostrar un cuarto vector en el que cada elemento sea el elemento del vector de pares pero que sea
el factorial de cada numero.*/

int *factorial( int *vectorPares,int tamano ){

int *nuevoarreglo;
int i;
int j;
nuevoarreglo= (int *)malloc(   npar(vectorPares, tamano)  *sizeof(int));//vector con la misma longitud que el vector de los pares

for(i=0; i<tamano ; i++){
	
	nuevoarreglo[i]=vectorPares[i]*2;
	
}

return nuevoarreglo;

}




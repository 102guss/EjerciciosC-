#include<stdio.h>

main (){ 

int opcion_proveedores;


printf("\n ADMINISTRADOR DE PROVEEDORES\n");


printf("\n QUE DESEA HACER\n");
printf("\n 1:Ingresar");
printf("\n 2:Visualizar");
printf("\n 3:Eliminar");
printf("\n 0:salir");
printf("\n selecione la opcion a su gusto: ");
scanf("%d",&opcion_proveedores);
switch(opcion_proveedores)
do{
{
case 1:
printf(" \n usted esta en Ingresar"); break;

case 2:
printf(" \n usted esta en visualizar"); break;

case 3:
printf(" \n usted esta en eliminar"); break;

case 0:
printf(" \ngracias por su vicita, hasta pronto\n");
break;

default:printf("\nerror, intente de nuevo\n");break;

}
}while( opcion_proveedores!=0);
return 0;

fflush(stdin);
getchar();

}



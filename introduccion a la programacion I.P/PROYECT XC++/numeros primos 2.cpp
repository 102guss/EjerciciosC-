
 #include <stdio.h>
    int main()
     
    {
    int c, j, n, es;
     
    printf("\tprograma que  calcula los numeros primos menores a un numero\n");
     
    printf("\n ingrese un numero: ");
    scanf("%d", & n);
 
 
     
    for (c=2; c<=n; c++)
     {
     
    es=1;
     
    for (j=2; j<c; j++){
     
    if (c%j==0){
     
    es=0;
}
 
}
if (es){
    printf("\t %d", c);
}
}
fflush(stdin);
getchar(); 
}



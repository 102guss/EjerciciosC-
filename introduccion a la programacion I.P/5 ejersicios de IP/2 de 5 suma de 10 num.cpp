
#include <stdio.h>


int main(void)
{
            int x, sum, tabla[10];
           
           for (x=0;x<10;x++)
            {
        printf("Introduzca número\n");
        scanf("%d",&tabla[x]);
    }
        
            sum=tabla[0];
   
            for (x=1;x<10;x++)
            {
        sum=sum+tabla[x];
       
           
            printf("Suma: %d\n",sum);
            
   fflush(stdin);
   getchar();
}
}

#include <stdio.h>

#define N 100

int main(void)
{
    char criba[N];
    int i, j;
    
    criba[0]=0;
    for (i=1; i<N; i++)
        criba[i]=1;
        
    for (i=2; i<N; i++)
        if (criba[i])
            for (j=2; i*j<N; j++)
                criba[i*j]=0;
    
    for (i=0; i<N; i++)
        if (criba[i])
            printf("%d\n", i);
            
    return 0;
}

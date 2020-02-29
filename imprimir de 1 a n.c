
#include <stdio.h>

int main()
{
    int n,contador=1;
    
    printf("digite um numero: ");
    scanf("%d", &n);
    
    while(contador<=n){
        
        printf("%d", contador);
        contador=contador+1;
    }
   return 0; 
}


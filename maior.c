#include <stdio.h>

int main()
{
    float n1,n2,n3;
    printf("digite um numero: ");
    scanf("%f",&n1);
    printf("digite outro numero: ");
    scanf("%f",&n2);
    printf("digite mais um numero: ");
    scanf("%f",&n3);
    if(n1>n2 && n1>n3){
        printf("n1 é maior");
    }
    else if(n2>n1 && n2>n3){
        printf("n2 é o maior");
    }
    else if(n3>n1 && n3>n2){
        printf("n3 é o maior");
    }

    return 0;
}
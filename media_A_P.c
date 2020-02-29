#include <stdio.h>

int main()
{
    float n1,n2,n3,calculo;
    int media;
    printf("Digite a n1 : \n");
    scanf("%f",&n1);
    printf("Digite a n2 : \n");
    scanf("%f",&n2);
    printf("Digite a n3 : \n");
    scanf("%f",&n3);
    printf("Digite 1 ou 2:\n 1-média aritmética \n 2- média ponderada\n ");
    scanf("%d",&media);
    if(media==1){
        calculo = (n1+n2+n3)/3;
        printf("A média é:%.2f ",calculo);
    }
    else if(media==2){
        calculo = (n1*3 +n2*3 +n3*4)/10;
        printf("A média é:%.2f ",calculo);
    }
    
    
    
    
    
    
    
    
    return 0;
}
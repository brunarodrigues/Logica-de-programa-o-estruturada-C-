#include <stdio.h>

int main()
{
    float n1,n2,n3,n4,media;
    printf("Digite a primeira nota: ");
    scanf("%f",&n1);
    printf("Digite a segunda nota: ");
    scanf("%f",&n2);
    printf("Digite a terceira: ");
    scanf("%f",&n3);
    printf("Digite a quarta ");
    scanf("%f",&n4);
    media = (n1+n2+n3+n4)/4;
    printf("A media é: %.2f ",media);

    if(media>=3 && media<7){
    printf("(EXAME) ");
}
    else if(media>=0 && media<3){
    printf("(REPROVADO) ");
    }
    else{
        printf("(APROVADO)");
        
    }
  
    return 0;
}

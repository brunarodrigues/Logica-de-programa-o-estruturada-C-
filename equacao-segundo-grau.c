
#include <stdio.h>
#include<math.h>

int main()
{
    float a,b,c,delta,x1,x2;  
    
    printf("digite o valor de a: ");
    scanf("%f",&a);
    printf("digite o valor de b: ");
    scanf("%f",&b);
    printf("digite o valor de c:  ");
    scanf("%f",&c);
    delta = (b*b) - (4*a*c);  
    if (delta>0){
        x1 = (-b+ sqrt(delta))/2*a;
        x2 = (-b-sqrt(delta))/2*a;
        printf("RAIZ: %.2f\n",x1);
        printf("RAIZ: %.2f\n",x2);
    }
    else if(delta<0){
        printf("NÃO EXISTE RAIZES");
    }
    else if(delta=0){
        x1 = (-b+ sqrt(delta))/2*a;
        x2 = x1;
        printf("RAIZES IGUAIS:%.2f \n",x1);
        printf("RAIZES IGUAIS:%.2f \n",x2);
        
    }
    
    
        

    return 0;

}


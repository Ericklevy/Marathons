#include <stdio.h>

void main(){
    int cod1,quant1,cod2,quant2;
    double p1,p2,valor;
    
    scanf("%d %d %lf",&cod1,&quant1,&p1);
    scanf("%d %d %lf",&cod2,&quant2,&p2);
    
    valor=(quant1*p1)+(quant2*p2);
    
    
    printf("VALOR A PAGAR: R$ %.2f\n",valor);
    
    system("pause");
}

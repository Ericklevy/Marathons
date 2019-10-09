#include <stdio.h>

int main(){
    int N;
    int X;
    int cont_divisores;
    int i;
    do{
        scanf("%d", &N);
    }while(N<1 || N>100);
   
    for (N; N>0; N--){
         do{
            scanf("%d", &X);
        }while(X<=1 || N>107);
        cont_divisores=0;
        for (i=2; i<X; i++){
            if(X%i==0){
                cont_divisores = cont_divisores+1;
            }
        }
        if (cont_divisores==0){
            printf("%d eh primo\n", X);
        }
        else {
            printf("%d nao eh primo\n", X);
        }
    }
    return 0;
}

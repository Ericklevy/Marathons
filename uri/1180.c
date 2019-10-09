#include <stdio.h>

int main(){
    int N;
    int i, j;
    int menor_valor;
    int posicao;
    
    do{
        scanf("%d", &N);
    }while (N<=1||N>=1000);
    
    int X[N];
    
    for (i=0; i<N; i++){
        scanf("%d", &X[i]);
        
        if(i==0){
            menor_valor = X[0];
            posicao = 0;
        }
    }
    
    for (j=0; j<N; j++){
        if (X[j]<menor_valor){
            menor_valor = X[j];
            posicao = j;
        }
    }
    printf("Menor valor: %d\n", menor_valor);
    printf("Posicao: %d\n", posicao);
    return 0;
}

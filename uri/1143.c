#include <stdio.h>

int main(){
    int N;
    int i;
    int quadrado;
    int cubo;
    do {
        scanf("%d", &N);
    } while (N < 1 || N > 1000);
    
    for (i=1; i<= N; i++){
        quadrado = i*i;
        cubo = i*i*i;
        printf("%d %d %d\n", i, quadrado, cubo);
    }

    return 0;
}

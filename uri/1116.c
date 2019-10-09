#include <stdio.h>

int main()
{
    int N;
    int X, Y;
    
    scanf("%d",&N);
    
    for(N;N>0;N--) {
        scanf("%d %d", &X, &Y);
        if(Y==0){
            printf("divisao impossivel\n");
        }
        else {
            printf("%.1f\n", (float)X/Y);
        }
    }
    
    

    return 0;
}

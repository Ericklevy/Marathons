#include <stdio.h>
#include <math.h>

int main() {
    float x1;
    float y1;
    float x2;
    float y2;
    float distancia;
    
    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f", &x2);
    scanf("%f", &y2);
    distancia = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    
    printf("%.4f\n", distancia);

    return 0;
}

#include <stdio.h>

int main(){
   double A,B,C;
   double tri,pi,circ,trap,q,ret;
   
   scanf("%lf %lf %lf",&A,&B,&C);
   pi=3.14159;
   tri = (A*C)/2;
   circ=pi*C*C;
   trap=((A+B)/2)*C;
   q=B*B;
   ret = A*B;
   
   
   printf("TRIANGULO: %.3lf\n",tri);
   printf("CIRCULO: %.3lf\n",circ);
   printf("TRAPEZIO: %.3lf\n",trap);
   printf("QUADRADO: %.3lf\n",q);
   printf("RETANGULO: %.3lf\n",ret);
   
   
   system("pause");
   
}

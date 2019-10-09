#include <stdio.h>
int main() {
	double horas,vel,roda;
	double litros;

	scanf("%lf",&horas);
	scanf("%lf",&vel);

	litros = (horas*vel/12) ;
    

	printf("%.3lf\n", litros);

	return 0;

}

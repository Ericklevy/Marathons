#include <stdio.h>

int main()
{
    int numero_funcionario;
    int horas;
    float valor_hora;
    float salario;

    scanf("%d", &numero_funcionario);
    scanf("%d", &horas);
    scanf("%f", &valor_hora);
    
    salario = horas*valor_hora;
    
    printf("NUMBER = %d\n", numero_funcionario);
    printf("SALARY = U$ %.2f\n", salario);
    
    return 0;
}

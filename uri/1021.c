# include<stdio.h>


int main()
{
    double n;
    int n100, n50, n20, n10, n5, n2;
    int m1, m50, m25, m10, m05, m01;
    scanf("%lf",&n);
    
    int notes,coins;
    notes = n;
    coins = (n-notes)*100;

    
    if((coins * 1000) % 10 == 9){
        coins++;
    }
    
    n100 = notes/100;
    notes %= 100;
    n50 = notes/50;
    notes %= 50;
    n20 = notes/20;
    notes %= 20;
    n10 = notes/10;
    notes %= 10;
    n5 = notes/5;
    notes %= 5;
    n2 = notes/2;
    notes %= 2;
    
    m1 = notes/1;
    notes %= 1;
    m50 = coins/50;
    coins %= 50;
    m25 = coins/25;
    coins %= 25;
    m10 = coins/10;
    coins %= 10;
    m05 = coins/5;
    coins %= 5;
    m01 = coins/1;

    
    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m05);
    printf("%d moeda(s) de R$ 0.01\n", m01);

    return 0;
    
}

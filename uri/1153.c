int main(){
    int N;
    int fatorial = 1;
    do {
        scanf("%d", &N);
    }while (N<0 || N>13);
    
    for (N; N>0; N--){
        fatorial = N*fatorial;
    }
    
    printf("%d\n", fatorial);

    return 0;
}

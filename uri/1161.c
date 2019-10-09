#include <iostream>
#include<stdio.h>

using namespace std;

long long int fat(int num){
    if(num==1 || num==0)
        return 1;
    return num*fat(num-1);
}


int main(int argc, char*argv[]){
    long long int m,n;

    while(scanf("%d %d",&m,&n)!=EOF){

        long long int soma;

        soma = fat(m)+fat(n);

        cout<<soma<<endl;

    }
    return 0;
}

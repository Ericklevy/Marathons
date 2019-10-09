#include<bits/stdc++.h>

using namespace std;

int main(){
int n, flag=1, aux;
while(scanf("%d", &n), n){
    queue<int>entrada;
    stack<int>estacao;
    vector<int>saida;
    flag=1;
    while(flag){
            int k=0;
        for(int i=1; i<=n; i++){
            entrada.push(i);
        }
        for(int i=0; i<n; i++){
            scanf("%d", &aux);
            if(aux == 0){
                flag=0;
                break;
            }
            saida.push_back(aux);
        }
        if(flag==0) {
            printf("\n");
            break;
        }
        for(int i=0; i<n; i++){
            aux=entrada.front();
            entrada.pop();
            estacao.push(aux);

            while((estacao.size()>0) && estacao.top()==saida[k]){
                estacao.pop();
                k++;
            }
        }
        if(estacao.size()==0) printf("Yes\n");
        else printf("No\n");
        
        saida.clear();
        while(!estacao.empty()){
            estacao.pop();
        }
    }
}
return 0;
}

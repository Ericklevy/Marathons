#include <iostream>

using namespace std;

int main(){

    int n,i,j,soma=0,conc=0,resultado;

    cin >> n;
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
        for(i=0;i<n;i++){
            soma += a[i][0];
        }
        resultado=soma;

        for(j=0; j < n; j++){
            for(i=0; i < n; i++){
                conc += a[i][j];
            }
            if(soma != conc){
                resultado = -1;
            }
            conc = 0;
            }
                if(resultado != -1){
                    for(i=0; i< n; i++){
                        for(j=0; j < n; j++){
                            conc += a[i][j];
                        }
                        if(soma != conc){
                            resultado = -1;
                        }
                        conc = 0;
                        }
                    }
                    if(resultado != -1){
                        for(i=0; i< n; i++){
                            for(j=0,i=0; j < n;i++, j++){
                                conc += a[i][j];
                            }
                            if(soma != conc){
                                resultado = -1;
                            }
                            conc = 0;
                        }
                    }
                    if(resultado != -1){
                        for(i = (n-1), j=0; j < n; i--, j++){
                            conc += a[i][j];
                        }
                        if(soma != conc){
                            resultado = -1;
                        }
                        conc = 0;
                    }
    cout<<resultado<<endl;
}

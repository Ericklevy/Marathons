#include <iostream>

using namespace std;

int main(){
  int n;
  int campo[55];

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>campo[i];

    }
    for(int i=0;i<n;i++){
        int quant=0;
        quant += campo[i];
        if(i<n-1){
        quant += campo[i+1];
        }
        if(i>0){
        quant += campo[i-1];
        }
    cout<<quant<<endl;
    }


    return 0;

}

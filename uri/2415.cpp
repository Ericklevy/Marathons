#include <iostream>
using namespace std;
int main(){
    int n,menor=1,maior=1,ant,num;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> num;
        if(i>0){
            if(ant==num){
                menor++;
            }
            if(ant!=num || i==n-1){
                if(menor>maior){
                    maior=menor;

                }

                menor = 1;

            }
        }
        ant = num;
    }
    cout<<maior<<endl;
    return 0;
}

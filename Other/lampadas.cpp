#include <iostream>
using namespace std;
int main() {
    int A=0,B=0,n;

    cin >> n;
    for(int i=0;i<n;i++){
        int l;
        cin >>l;
        if(l==1){
            if(A==1){
                A=0;
            }else{
                A = 1;
            }
        }
        else{
            if(A==1){
                A=0;
            }
            else{
                A =1;
            }
            if(B==1){
                B=0;
            }else{
                B =1;
            }
        }
    }
    cout<<A<<endl<<B<<endl;

    return 0;
}


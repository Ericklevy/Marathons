#include <iostream>

using namespace std;

int main(){
    char ope;
    int n,p,q,res;
    cin>>n;
    cin>>p>>ope>>q;

    if(ope=='+'){
        res=p+q;
    }else{
        res=p*q;
    }

    if(res>n){
        cout<<"OVERFLOW"<<endl;
    }else{
        cout<<"OK"<<endl;
    }


}

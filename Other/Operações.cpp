#include <iostream>

using namespace std;

int main(){
    char ope;
    double n,m,div,mult;
    cin>>ope;
    cin>>n>>m;
    if(ope=='M'){
        cout.precision(2);
        cout.setf(ios::fixed);
        mult=n*m;
        cout<<mult;

    }
    else if(ope=='D'){
        cout.precision(2);
        cout.setf(ios::fixed);
        div=n/m;
        cout<<div;
    }
    
    return 0;
}

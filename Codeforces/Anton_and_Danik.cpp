#include <iostream>
#include <string>
 
using namespace std;
 
 
int main()
{
    int n,a,b;
 
    a = 0;
    b = 0;
 
    string str;
 
    cin >> n;
 
    cin >> str;
 
    for(int i =0 ;i<n;i++){
        if(str[i]=='A'){
            a += 1;
        }
        else{
            b += 1;
        }
 
 
    }
 
    if(a>b){
        cout<<"Anton"<<endl;
    }
    else if(b>a){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
 
    
 
    return 0;
}

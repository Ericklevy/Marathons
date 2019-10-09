#include <iostream>
#include <string>
 
using namespace std;
 
 
int main()
{
    string a,b,d,c,m;
    int x;
 
    cin>>x;
 
    a = "I hate ";
    b = "I love ";
    d = "it\n";
    c = "that ";
 
    for(int i = 1; i <= x; i++){
        if(i%2==0){
            m += b;
        }
        else{
            m += a;
        }
 
        if(i==x){
            m += d;
        }
        else{
            m += c;
        }
    }
 
    cout << m <<endl;
 
 
    return 0;
 
}

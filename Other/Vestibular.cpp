#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
  string x,y;
  int n,soma=0;

    cin>>n;

if(n<=80){
        cin>>x;
        cin>>y;
    for(int i=0;i<n;i++){
        if(x[i]==y[i])
            soma=soma+1;
        }
    }
    cout<<soma;

}

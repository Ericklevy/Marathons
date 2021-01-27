#include <iostream>
#include<string.h>
#include <cctype>

using namespace std;

string title(string F){

    for(int j=0;j<F.size()+1;j++){
            F[j]=tolower(F[j]);
        for(int i=0;i<F.size()+1;i++){
            if(i==0||F[i-1]==' ')
                F[i]=toupper(F[i]);
            else
                F[i]=F[i];

        }
    }
    return F;
}

int main(){
    string F;

    getline(cin, F);

    cout << title(F) << "\n";
}

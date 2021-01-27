#include <iostream>

using namespace std;

int main(){
    int n;
    int codigo[10000];

    cin>>n;
    for(int i=0;i<n;i++) cin>>codigo[i];

    int ct=0;
    for(int j =2; j<n;j++)
        if(codigo[j-2]==1 && codigo[j-1]==0 && codigo[j]==0)
            ct++;

    cout<<ct;




    return 0;

}

#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]){
    int n;

    cin>>n;

    char t[6];
    for(int i=0;i<n;i++){
        cin>>t;
        int tam;

        tam = strlen(t);

        if(tam==5){
            cout<<"3"<<endl;
        }
        else if((t[0] == 'o' && t[1] == 'n') || (t[1] == 'n' && t[2] == 'e') || (t[0] == 'o' && t[2] == 'e')){
            cout << "1" << endl;
        }else{
            cout<<"2"<<endl;
        }



    }



    return 0;
}

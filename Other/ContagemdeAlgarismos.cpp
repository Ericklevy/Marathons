#include <iostream>
#include <string.h>


using namespace std;

int main(){

    int n,v=0,j,z=0,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0;
    string num;
    cin >> n;

    for(int i=0;i<n;i++){

        cin>>num;
        for(int j=0;j<num.size(); j++){
            if(num[j]=='0'){
                z++;
            }
            else if(num[j]=='1'){
                v++;
            }
            else if(num[j]=='2'){
                a++;
            }
            else if(num[j]=='3'){
                b++;
            }
            else if(num[j]=='4'){
                c++;
            }
            else if(num[j]=='5'){
                d++;
            }
            else if(num[j]=='6'){
                e++;
            }
            else if(num[j]=='7'){
            f++;
            }
            else if(num[j]=='8'){
            g++;
            }
            else if(num[j]=='9'){
                h++;
            }
        }
    }
    cout<<"0 - "<<z<<endl;
    cout<<"1 - "<<v<<endl;
    cout<<"2 - "<<a<<endl;
    cout<<"3 - "<<b<<endl;
    cout<<"4 - "<<c<<endl;
    cout<<"5 - "<<d<<endl;
    cout<<"6 - "<<e<<endl;
    cout<<"7 - "<<f<<endl;
    cout<<"8 - "<<g<<endl;
    cout<<"9 - "<<h<<endl;


}

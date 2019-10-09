#include <bits/stdc++.h>


using namespace std;



int main(){
    int al=0;
    int gas=0;
    int di=0;
    string s;


    while(s!="4")
	{
		cin>>s;
		if(s=="2"){
            gas++;
		}
		else if(s=="1"){
            al++;
		}
		else if(s=="3"){
            di++;
		}
	}

	cout<<"MUITO OBRIGADO"<<endl;
	cout<<"Alcool:"<<" "<<al<<endl;
    cout<<"Gasolina:"<<" "<<gas<<endl;
    cout<<"Diesel:"<<" "<<di<<endl;


	return 0;
}

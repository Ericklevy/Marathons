#include <bits/stdc++.h>


using namespace std;



int main()
{
    int n,y,soma;
	string s;
	cin >>n>>y ;
	soma=n;
	for(int i=0;i<y;i++){
        cin>>s;
        if(s=="fechou"){
            soma++;
        }
        else{
            soma--;
        }
	}
	cout<<soma<<endl;



	return 0;
}

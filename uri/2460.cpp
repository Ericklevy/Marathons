#include <bits/stdc++.h>
#include <set>
#include <cstdio>

using namespace std;

int main(){
    vector<int> V;
    set<int>t;
    int n,f;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>f;
        V.push_back(f);

    }

    int m,r;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>r;
        t.insert(r);
    }
    int s=0;
    for (int i = 0; i < n; i++) {
        if(t.find(V[i]) == t.end()) {
            if (s++ > 0) printf(" ");
                cout<<V[i];
        }
    }
    cout<<endl;


}

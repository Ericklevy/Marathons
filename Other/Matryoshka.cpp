#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int x;

    cin>>x;
    int v[x],y[x];

    for(int i=0;i<x;i++){
        cin>>v[i];
        y[i]=v[i];
    }
    sort(y,y+x);
    int troc[x];
    int quant = 0;
    for (int i = 0; i < x; ++i)
    {
        if (y[i] != v[i])
        {
            troc[quant] = y[i];
            quant += 1;
        }
    }
    cout << quant <<endl;
    for (int i = 0; i < quant; ++i)
        cout << troc[i] << " ";

    return 0;
}

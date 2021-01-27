#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i, j=0, ler;
    char x[60], y[60];
    cin>>x;
    for(i=0; x[i]; i++)
    {
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u')
        {
            y[j] = x[i];
            j++;
        }
    }
    y[j] = '\0';
    ler = strlen(y);
    for(i=0, j=ler-1; i < ler; i++, j--)
    {
        if(y[i] != y[j])
        {
            cout<<"N";
            return 0;
        }
    }
    cout<<"S";
    return 0;
}

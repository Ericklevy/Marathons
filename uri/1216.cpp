#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	char nome[100];
	double d, soma = 0.0,r;
	int cont = 0;

	while(scanf("%[^\n]", &nome) != EOF)
	{
		scanf("%lf", &d);
		soma += d; // soma = soma + d
		cont+=1; // cont = cont + 1

	}
	r=soma/cont;

	cout.precision(1);
    cout.setf(ios::fixed);

    cout<<r<<endl;

	return 0;
}

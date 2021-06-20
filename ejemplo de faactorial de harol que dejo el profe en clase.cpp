#include<iostream>
using namespace std;

//cabecera principal
int main()
{
	int i=1;// inicializo en 1 
	int n;// variable entera
	int fact=1;
	cout<<"Ingrese numero : "<<endl;
	cin>>n;
	if(n<0)
	{
		cout<<"No existe";
		return 0;
	}
	do
	{
		fact *=i++;
	}while(i<=n);
	cout<<"El factorial de "<<n<<" es : "<<fact<<endl;
}

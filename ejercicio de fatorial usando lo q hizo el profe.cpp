#include<iostream>

using namespace std;

int factorial(int n)// aca creo la factorial para numeros negativos 
{
	if(n<0)
	{
		return -1;
	}
	if(n<2)// aca va esto xq arrbia me aseguro que caiga los negativos 
	{
		return 1;
	}
	else
	    {
	    	cout<<n<<" x factorial ("<<n-1<<")"<<endl;
	    	return n*factorial(n-1);
		}
}

//cabecera principal 
int main()
{
	int n;
	cout<<"==========BIENVENIDOS AL CURSO DE FACTORIAL==========="<<endl;
	cout<<"Ingrese el numero a calcular : ";
	cin>>n;
	cout<<factorial(n);// llama a la funcion factorial para que muestre el calculo 
	
}

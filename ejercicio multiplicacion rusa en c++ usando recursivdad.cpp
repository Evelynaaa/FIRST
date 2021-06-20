#include<iostream>
#include<stdlib.h>

using namespace std;

int num1, num2, tot;


// hacer este ejercicio osea la multiplicacion usando la recursivdad 

int main()
{
	cout<<"================BIENVENIDOS A LA MULTIPLICACION RUSA============"<<endl;
	cout<<"Ingrese el # 1 : ";
	cin>>num1;
	cout<<"Ingrese el # 2 : ";
	cin>>num2;
	
	while(num1 >= 1)
	{
		  if(num1%2!=0)
		  {
		  	tot = tot+ num2;
		  }
		  num1 = num1/2;
		  num2 = num2*2;
	}
	cout<<"El resultado es  : "<<tot<<endl;
	system("pause");
	
}

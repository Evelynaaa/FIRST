#include<iostream>

using namespace std;

//resolverlo con un while o do-while 

int factorial(int n)// o tambien llamado permutacion
{
	char resp;
	while(n >=1 )
	{
		if(n < 0)
	   {
	  return -1;// esto significa un error	
       }
	   if(n <= 1)//ESTO SIEMPRE VA A SER CORRECTO XQ ARRIBA SERIA N MENOR QUE CERO SIEMPRE Y CUANDO SEA ESO
	   {
		return 1;// factorial de cero es 1
	   }
	    else
	    {
	    	cout<<n<<" x factorial("<<n-1<<")"<<endl;
	    	return n*factorial(n-1);// ultimo valor q es n x factorial qe es n-1
		}
	}
	
}

// 5! = 5x(4x(3x(2x(1x0!))))
// 5! = 5x(4x(3x(2x(1x1))))
// 5! = 5x(4x(3x(2x1)))
// 5! = 5x(4x(3x 2 )) 
// 5! = 5x(4x6)
// 5! = 5x24
// 5! = 120



int main()
{
	int n;
	
	cout<<"-----------CALCULO DE FACTORIAL----------"<<endl;
	cout<<"Ingrese el numero a calcular : ";
	cin>>n;
	cout<<factorial(n);// aca llamamos al factorial para q muestre
}


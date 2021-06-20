#include<iostream>
using namespace std;

int main(void)
{
	int i=1;// aqui iniciamos en 1 ya que es while, tneemos que iniciarlo si o si en 1.
	int factorial=1;
	
	int num;// varibale entera
	
	cout<<"Ingresa un numero : ";
	cin>>num;
	
	if(num<0)
	    factorial=0;// el identificador "factorial" no esta definido 
	else
	    if(num==0)
	         factorial=1;// el "identificador" no esta definido 
	    else
		{
		     while(i<=num)
		     {
			   factorial=factorial*i;// el identificador "factorial" no esta definido 
		       i++;// contador 
		     }
	    }
	system("cls");// limpia la consola 
	cout<<"==============CALCULO DE FACTORIAL=====================\n";
	cout<<"FACTORIAL DE "<<num<<" ES : "<<factorial<<endl;// el identificador "factorial" no esta definddo
	system("pause");// pausa la consola 
}

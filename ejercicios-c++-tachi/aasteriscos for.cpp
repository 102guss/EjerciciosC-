#include<iostream>
using namespace std;
 
main()
{
 
	int i;
	int n;
	int valor;
 
	cout<<"\n In troduzca numero de escalones de la piramide del  (1-7)"<<endl;
	cin>>valor;
	cout<<endl;
	
 
	for(i=1;i<=valor;i++){
		for(n=1;i>=n;n++)
			 cout<<"*";
			cout<<"\n";
 
	}
 
}

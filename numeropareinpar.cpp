//programa numero par e inpar Gustavo Chiguichon 
#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero%2==0){
		cout<<"El numero es par";
	}
	else{
		cout<<"El numero es inpar";
	}
	return 0; 
}

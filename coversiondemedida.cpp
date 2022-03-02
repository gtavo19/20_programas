//conversion de medidas Gustavo Chiguichon 


// 1 kilometro == 0.621371 millas
// 1 metro equivale a 39.3701 pulgadas 
// 1 libra equivale a 0.453592 kilos
#include<iostream>
using namespace std;
int main(void){
	
	int opcion;
	double pulgadas, metros, libras, kilos, millas, kilometros;
	
	cout<<"Ingrese Opcion: " <<endl;
	cout<<"1. Kilometros a millas " <<endl;
	cout<<"2: Metros a Pulgadas "<<endl;
	cout<<"3. Libras a Kilos "<<endl;
	cin>> opcion;
	
	switch (opcion){
		
		case 1:
			
			cout<< "<<<<<kilometros a Millas>>>>" <<endl;
			cout<< "Ingrese la cantidad de kilometros a convertir:   "<< endl;
			cin>>kilometros;
			millas  = kilometros * 0.621371;
			cout<< kilometros <<" =>kilometros equivalen a " << millas << " =>millas: " <<endl;
			break;
			
		case 2:
			cout<< "<<<<<metros a pulgadas>>>>" <<endl;
			cout<< "Ingrese la cantidad de metros  a convertir:   "<< endl;
			cin>>metros;
			pulgadas  = metros * 39.3701;
			cout<< metros <<" =>Metros equivalen a " << pulgadas << " =>pulgadas: " <<endl;
			break;
			
		case 3:
			cout<< "<<<<<libras a kiloss>>>>" <<endl;
			cout<< "Ingrese la cantidad de libras  a convertir:   "<< endl;
			cin>>libras;
			kilos  = libras * 0.453592;
			cout<< libras <<" =>libras equivalen a " << kilos << " =>kilos: " <<endl;
			break;			
				
	}
	
	
	
	
	
	
	
	
	
}

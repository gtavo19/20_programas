#include <iostream> 
using namespace std; 

int main () 
{
        int x, monto = 0;
 cout<<"Ingrese los datos de la compra"<<endl;
 cout<<"Zapatos comprados: ";
 cin>> x;
 monto = x * 80;

 if (x < 10)
 {
  cout<<"El monto total a pagar es: "<<monto;
 }
 else if (x < 20)
 {
  cout<<"El monto total a pagar es: "<<monto - (monto * 0.10);
  // (monto * 0.10) representa el descuento que se va a realizar
 }
 else if (x < 30)
 {
 cout<<"El monto total a pagar es: "<<monto - (monto * 0.20);
  // (monto * 0.20) representa el descuento que se va a realizar 
 }
 else
 {
  cout<<"El monto total a pagar es: "<<monto - (monto * 0.40);
  // (monto * 0.40) representa el descuento que se va a realizar
 }

 return 0;
}

#include<iostream>
int main(){
    int numero;
    do{
        std::cout<<"Hola digita un numero entre 1 y 10: ";
        std::cin>>numero;
        if(numero<1 || numero>10){
            std::cout<<"Hola es un numero del 1 y 10.\n";
        }
    }while(numero<1 || numero>10);
    std::cout<<"\n\n";
    for (int i = 1; i <= 10; i++)
    {
        std::cout<<i<<" x "<<numero<<"="<<i*numero<<"\n";
    }
    system("pause");
    return 0;
} 

// Gustavo Chiguichon 5990 13 21853

#include <iostream.h>
#include <limits>
 
#define LIMITE_SUP 10000
#define LIMITE_INF 0
#define N_DIGITOS_ENTERO 4
#define DECENAS 2
 
using namespace std; 
 
void pausar()
{
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.get();
}
 
int main(int argc, char* argv[])
{
    //Cadenas constantes
    char cadenas[4][11][15]={{"","mil ","dosmil ","tresmil ","cuatromil ","cincomil ","seismil ","sietemil ","ochomil ","nuevemil "},
                             {"","cien ","doscientos ","trescientos ","cuatrocientos ","quinientos ","seiscientos ","setecientos ","ochocientos ","novecientos "},
                             {"","diez ","veinte ","treinta ","cuarenta ","cincuenta ","sesenta ","setenta ","ochenta ","noventa "},
                             {"cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"}};
    char cadenas2[4][10]={"","ciento ","dieci",""};
 
    int parteEntera,parteDecimal;
    double num;
 
    //Pido un valor dentro del rango valido
    do{
        cout << "Introduce un numero (0 a 9999.99): ";
        cin >> num;
        if(num < LIMITE_INF || num >= LIMITE_SUP)
            cout << "El numero introducido excede del rango valido. Vuelva a intentarlo." << endl;
    }while(num < LIMITE_INF || num >= LIMITE_SUP);
 
    //Separo la parte entera y la parte decimal truncando la decimal y quedandome solo con dos decimales
    parteEntera = num;
    parteDecimal = (num-parteEntera)*100;
 
    string salida;
 
    //Separo los digitos enteros
    int digitos[N_DIGITOS_ENTERO];
    for(int i=N_DIGITOS_ENTERO-1; i>=0; i--,parteEntera /=10)
        digitos[i]=parteEntera%10;
 
    
    for(int i=0; i<N_DIGITOS_ENTERO; i++){
        bool compuesta=false;
        switch(digitos[i]){
            case 0: 
                if(i==N_DIGITOS_ENTERO-1){
                    for(int j=0;j<N_DIGITOS_ENTERO;j++){ 
                        if(digitos[j] != 0){
                            compuesta=true;
                            break;
                        }
                    }
                    if(!compuesta) 
                        salida += cadenas[i][digitos[i]];
                }
                break;
            default: //Si no es cero el digito
                for(int j=i+1;j<N_DIGITOS_ENTERO;j++){ //Busco si despues de dicho digito hay algun digito diferente de 0
                    if(digitos[j] != 0){
                        compuesta=true;
                        break;
                    }
                }
                if(compuesta){ //Si existe algun digito diferente de 0 detras de en el que estoy ahora...
                    if(digitos[i]==1 && i > 0){ //Si es 1 y no son las unidades cojo del segundo array de cadenas para crear una cadena compuesta
                        salida += cadenas2[i];
                    }else if(digitos[i]==2 && i==DECENAS){ //Si es 2 y son las decenas uso la cadena "veinti" para crear una cadena compuesta
                        salida += "veinti";
                    }else{ 
                        salida += cadenas[i][digitos[i]]; 
                        if(i==DECENAS) 
                            salida += "y ";
                    }
                }else{ 
                    salida += cadenas[i][digitos[i]]; 
                }
        }
 
    }
    
    if(salida[salida.length()-1]!= ' ')
        salida += " ";
 
    
    cout << salida << parteDecimal << "/100"<< endl;
 
    cout << "Pulsa intro para salir...";
    pausar();
    return 0;
}

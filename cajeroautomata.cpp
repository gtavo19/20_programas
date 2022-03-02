#include <iostream>
using namespace std;

int main()
{
    // La clave correcta
    const string claveCorrecta = "1234";
    cout << "Bienvenido al cajero autom�tico\n";
    cout << "Ingrese la clave: ";
    string clave = "";
    cin >> clave;
    if (clave != claveCorrecta)
    {
        cout << "Clave incorrecta";
        // Con return detenemos la ejecuci�n del programa
        return 0;
    }
    // Si llegamos hasta aqu�, podemos estar seguros de que el usuario introdujo la clave correcta
    cout << "Clave correcta\nBienvenido\n";
    double fondos = 5000; // Simular fondos

    string eleccion = "";
    // Men�
    while (eleccion != "2")
    {
        // Mostrar fondos
        cout << "Fondos disponibles: " << fondos << endl;
        // Imprimir men�
        cout << "1. Retirar dinero\n2. Salir\nSeleccione: ";
        cin >> eleccion;
        if (eleccion == "1")
        {
            // Solicitar cu�nto se retira
            double retiro;
            cout << "Ingrese cantidad a retirar: " << endl;
            cin >> retiro;
            // Comprobar si puede retirar
            if (retiro > fondos || retiro <= 0)
            {
                cout << "No puede retirar esa cantidad";
            }
            else
            {
                // En caso de que s� pueda retirar
                cout << "OK. Ha retirado " << retiro << endl;
                // Restamos los fondos existentes
                fondos = fondos - retiro;
                // Y el ciclo sigue...
            }
        }
    }
    return 0;
}

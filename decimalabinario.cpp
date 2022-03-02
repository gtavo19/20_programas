
//Gustavo Chiguichon 59990 13 21853

#include <iostream>

using std::cout;
using std::endl;
using std::string;

string toBinary(int n)
{
	
	
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}

int main() {
    int number = 15;

    cout << "decimal: " << number << endl;
    cout << "binary : " << toBinary(number) << endl;

    return 0;
} 

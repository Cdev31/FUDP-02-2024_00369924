#include <iostream>

using namespace std;

int main()
{
    int number1, number2;
    bool isPositive = false , isNegative = false;

    cout << "Ingrese su primer numero: " << endl;
    cin >> number1;

    cout << "Ingrese su segundo nombre: " << endl;
    cin >> number2;

    if( number1 > 0 &&  number2 > 0 ){
        isPositive = true;
    }
    else isNegative = true;

    if ( isPositive ){ 
        cout << "El numero: " << number1 << " y " << number2 << " son positivos\n";
    } 
    else if( isNegative ){
        cout << "Alguno o todos los numeros son negativos\n";
    }
   
    return 0;
}

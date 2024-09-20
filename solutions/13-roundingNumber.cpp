#include <iostream>

using namespace std;

int main()
{
    double number;
    int roundingNumber;

    cout << "Ingrese el numero con decimales que usted quiera redondear\n";
    cin >> number;

    //Tarea para poder que se pueda escoger el nivel de redondeo
    // cout << "Cuantos decimales quiere que se redondeen?\n";
    // cin >> roundingNumber;

    // float decimalPart = number - (int)number;

    // for( int counter =0; roundingNumber > counter; counter++ ){

    // } 

    float decimalPart = number - (int)number;
    int integerPart = number;

    if( decimalPart >= 0.5 ){
        cout << "Su numero redondeado es: " << (integerPart + 1) << endl;
    }
    else if( decimalPart < 0.5 ){
         cout << "Su numero redondeado es: " << integerPart << endl;
    }
    return 0;
}

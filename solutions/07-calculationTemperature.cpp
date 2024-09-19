#include <iostream>

using namespace std;

int main()
{
    float temperature ;

    // It give temperature
    cout << "Ingrese su temperatura para convertirla en Fahrenheit: " << endl;
    cin >> temperature;

    //process
    float convertion = ( temperature * 9/5 ) + 32;

    // print result
    cout << "Su temperatura en Fahrenheits es: " << convertion << endl;

    return 0; 
}

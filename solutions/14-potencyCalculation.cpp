#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number, potency;

    cout << "Ingrese su numero:\n";
    cin >> number;

    cout << "Ingrese la potencia:\n";
    cin >> potency;

    int result = pow( number, potency );

    cout << "Su numero potenciado a: " << potency << " es " << result << endl;

    return 0;
}

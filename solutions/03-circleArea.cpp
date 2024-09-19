#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //variable declaration, using cmath by to use M_PI constant
    double numberPI = M_PI ;
    double radioArea;
    
    // it give radio
    cout << "Ingrese el radio de su circulo:" << endl;
    cin >> radioArea;

    //process
    double result = numberPI * ( radioArea * radioArea );

    cout << "El area de su circulo es: " << result << endl;

    return 0;
}

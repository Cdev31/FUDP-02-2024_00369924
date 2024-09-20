#include <iostream>

using namespace std;

int main()
{
    int base, height;

    cout << "Ingrese su base:" << endl;
    cin >> base;

    cout << "Ingrese su altura:" << endl;
    cin >> height;

    int perimeter = 2 * ( base + height );

    cout << "Su perimetro es:" << perimeter << endl;
    
 
    return 0;
}

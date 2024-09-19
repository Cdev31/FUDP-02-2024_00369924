#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //variable declaration
    int number1;
    float number2;

    // it give first numer and second number
    cout << "Ingrese su numero entero para ser convertido a decimal" << endl;
    cin >> number1;

    cout << "Ingrese su numero decimal para ser convertido a entero" << endl;
    cin >> number2;

    //process
    float decimalConvertion = number1;
    int integerConvertion = number2;

    //show 2 ceros after point
    cout << fixed << setprecision(2);
    cout << "Su numero entero convertido a decimal es: " << decimalConvertion << endl;
    cout << "Su numero decimal convertido a entero es: " << integerConvertion << endl;


    return 0;
}

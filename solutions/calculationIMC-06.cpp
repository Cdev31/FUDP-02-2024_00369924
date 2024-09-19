#include <iostream>

using namespace std;


int main()
{
    //variable declaraion, weight and height
    float weight, height;

    // it give weight
    cout << "Ingrese su peso:" << endl;
    cin >> weight;

    //it give height
    cout << "Ingrese su altura en metros" << endl;
    cin >> height;

    //process
    float imc = weight / ( height * height );

    //print result
    cout << "Su IMC es: " << imc << endl; 

    return 0;
}

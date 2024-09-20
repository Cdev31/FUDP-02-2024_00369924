#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;


int main()
{
    float points[4];

    for( int counter = 0; counter < 4 ; counter++ ){
        float value;
        cout << "Ingrese su punto " << ( counter + 1 ) << endl;
        cin >> value; 

        points[counter] = value;
    }

    float process = pow( ( points[0] - points[1] ), 2 ) + pow( ( points[2] - points[3] ), 2 );

    float result = sqrt( process );

    cout << "Su distancia entre puntos es: " << result << endl;

    return 0;
}

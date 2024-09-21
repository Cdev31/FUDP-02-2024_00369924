#include <iostream>

using namespace std;

int main()
{
    float hours;
    
    cout << "Ingresa las horas que quieras convertir:\n";
    cin >> hours;

    float minutes = hours * 60;

    float seconds = minutes * 60;

    cout << "Horas en minutos: "  << minutes << " ,Horas en segundos: " << seconds << endl;

    return 0;
}

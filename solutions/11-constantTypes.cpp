#include <iostream>

using namespace std;

int main()
{
    const int daysOfTheWeek = 7;
    int chooseDay;

    cout << "Ingresa el numero de la semana que quieres imprimir:\n";
    cin >> chooseDay;

    //esto se puede hacer con bucles, structs, arrays para una mejor codificacion
    switch ( chooseDay )
    {
    case 1:
        cout << "Su dia es Lunes" << " de " << daysOfTheWeek << " dias de la semana\n";
        break;
    case 2:
        cout << "Su dia es Martes" << " de " << daysOfTheWeek << " dias de la semana\n";
    break;
    case 3:
        cout << "Su dia es Miercoles" << " de " << daysOfTheWeek << " dias de la semana\n";
    break;
    case 4:
        cout << "Su dia es Jueves" << " de " << daysOfTheWeek << " dias de la semana\n";
    break;
    case 5:
        cout << "Su dia es Viernes" << " de " << daysOfTheWeek << " dias de la semana\n";
    break;
    case 6:
        cout << "Su dia es Sabado" << " de " << daysOfTheWeek << " dias de la semana\n";
    break;
    case 7:
        cout << "Su dia es Domingo" << " de " << daysOfTheWeek << " dias de la semana\n";
    break;

    default:
        break;
    }


    return 0;
}

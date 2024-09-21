#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;


int main()
{
    srand( time(0));
    int number = rand() % 100 + 1 ;

    cout << "Numero aleatorio: " << number << endl;
    return 0;
}

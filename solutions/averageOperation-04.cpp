#include <iostream>

using namespace std;

int main()
{
    //variable declaration
    float gradeOne, gradeTwo, gradeThree;

    //it give first grade
    cout << "ingrese su primera nota: " << endl;
    cin >> gradeOne;

    //it give second grade
    cout << "ingrese su segunda nota: " << endl;
    cin >> gradeTwo;

    //it give thrid grade
    cout << "ingrese su tercera nota: " << endl;
    cin >> gradeThree;

    //process
    float average = ( gradeOne + gradeTwo + gradeThree) / 3;

    cout << "Su promedio es: " << average << endl;

    return 0;
}

#include <iostream>

using namespace std;

// int main()
// {
//     //variable declaration
//     float gradeOne, gradeTwo, gradeThree;

//     //it give first grade
//     cout << "ingrese su primera nota: " << endl;
//     cin >> gradeOne;

//     //it give second grade
//     cout << "ingrese su segunda nota: " << endl;
//     cin >> gradeTwo;

//     //it give thrid grade
//     cout << "ingrese su tercera nota: " << endl;
//     cin >> gradeThree;

//     //process
//     float average = ( gradeOne + gradeTwo + gradeThree) / 3;

//     cout << "Su promedio es: " << average << endl;

//     return 0;
// }

//other away
int main()
{
    //variable declaration
    float sumGrades;

    int counter = 0;

    while ( counter < 3){

        float values;

        //it give values
        cout << "Ingrese su nota " << ( counter + 1 ) << ":" << endl;
        cin >> values ;

        // sum grades
        sumGrades = sumGrades + values;

        counter++;
    }

    //process
    float average = sumGrades / 3;

    cout << "Su promedio es: " << average << endl;

    return 0;
}



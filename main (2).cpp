/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

/**
* @Breef - функция подставляет значение const в уравнение.
* @param x-аргумент функции
*/

double getOunce(double weight);

int main()
{
    double weight;
    cout << "Вес в граммах: ";
    cin >> weight ;
    cout << "Вес в унциях: "<< getOunce(weight) << endl;
    return 0;
}

double getOunce(double weight)
{
    const double toOunce = 28.3;
    return (weight/toOunce);
}
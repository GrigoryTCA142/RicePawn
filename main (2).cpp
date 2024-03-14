/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

double getA(double x);

int main()
{
    double x;
    cout << "Вес в граммах: ";
    cin >> x ;
    cout << "Вес в унциях: "<< getA(x) << endl;
    return 0;
}

double getA(double x)
{
    return (x/28.3);
}
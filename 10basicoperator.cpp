#include <iostream>
using namespace std;
int main()
{

    int num1, num2;

    cout << "enter the value of num 1 and num 2" << endl ;

    cin >> num1 >> num2;

    int addition = num1 + num2;

    int division = num1 / num2;

    int multiplication = num1 * num2;

    int subtrcation = num1 * num2;

    int modulus = num1 % num2;

    cout << "addition--" << addition << endl;
    cout << "division--" << division << endl;
    cout << "multiplication--" << multiplication << endl;
    cout << "subtraction--" << subtrcation << endl;
    cout << "modulus--" << modulus << endl;
}
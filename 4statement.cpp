#include <iostream>
using namespace std;
/*
1. statement  are executed in order from top to bottom when the program is run
2. excution keeps going until there is a statement causing the program to terminate or run another sequence of statement
*/
int addnumber(int firstnumber, int secondnumber)
{
    int sum = firstnumber + secondnumber;
    return sum;
}
int main()
{

    // int firstnumber = 12 ;

    // int secondnumber= 32 ;

    int firstnumber{12};

    int secondnumber{32};

    int sum = firstnumber + secondnumber;

    sum = addnumber(firstnumber, secondnumber);

    cout << "The  first nunber is : " << firstnumber << endl;
    cout << "The second nunber is : " << secondnumber << endl;
    cout << "The sum of first and second nunber is : " << sum << endl;
    cout << "The sum of first and second nunber is : " << addnumber(5, 15) << endl;

    return 0;
}

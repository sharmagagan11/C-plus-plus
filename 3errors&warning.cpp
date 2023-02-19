
/*
 Compile-Time Errors:
  
Errors that occur when you violate the rules of writing syntax are known as Compile-Time errors. 
This compiler error indicates something that must be fixed before the code can be compiled.
All these errors are detected by the compiler and thus are known as compile-time errors. 
Most frequent Compile-Time errors are: 
 

Missing Parenthesis (})
Printing the value of variable without declaring it
Missing semicolon (terminator)

Example---(in this example we forget ;)
#include<iostream>
using namespace std;
int main()
{
    cout<<"Gagan Sharma"<<endl
    cout<<"Gagan Sharma"<<endl;

}

Run Time Error ----->

Run-Time Errors: Errors which occur during program execution(run-time) after successful compilation are called run-time errors. 
One of the most common run-time error is division by zero also known as Division error.
These types of error are hard to find as the compiler doesn’t point to the line at which the error occurs.
 
logical error are called run time error in this error 

Example --->
#include <iostream>
using namespace std;
 
int main()
{
    int n = 9, div = 0;
   
    // wrong logic
    // number is divided by 0,
    // so this program abnormally terminates
    div = n/0;
     
    cout <<"result = " << div;
}
 
*/
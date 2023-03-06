#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    /*
    n(floating point)/0     infinity(+/-)
    0.0/0.0                 nan
    */

float number1 {1.12356789789456123f};
float number2 {2.98765432112456789f};

double number3 {1.12356789789456123};
double number4 {2.98765432112456789};

long double number5 {1.12356789789456123l};
long double number6 {2.98765432112456789l};

cout<<"the float number1 is : "<<number1<<endl;
cout<<"the float number2 is : "<<number2<<endl;
cout<<"the size of float number1 is : "<<sizeof(number1)<<endl;
cout<<"the size of float number2 is : "<<sizeof(number2)<<endl;

cout<<"the double number3 is : "<<number3<<endl;
cout<<"the double number4 is : "<<number4<<endl;
cout<<"the size of double number3 is : "<<sizeof(number3)<<endl;
cout<<"the size of double number4 is : "<<sizeof(number4)<<endl;


cout<<"the long double number5 is : "<<number5<<endl;
cout<<"the long double number6 is : "<<number6<<endl;
cout<<"the size of long double number5 is : "<<sizeof(number5)<<endl;
cout<<"the size of long double number6 is : "<<sizeof(number6)<<endl;

// precision
cout<<setprecision(30);
cout<<"number1 is : "<<number1<<endl;
cout<<"number2 is : "<<number2<<endl;




    return 0;
}
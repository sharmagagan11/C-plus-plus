#include<iostream>
using namespace std;
int main(){
/*

 int value1{13};
 int value2{-13};

 signed int value1{13};
 signed int value2{-13}; 


short       2byte
integer     4 byte
double      8 byte
float       4 byte
long        4 or 8 byte
long long   8byte

*/

int value1 {13} ;
int value2 {-13} ;
signed int value3{13};
signed int value4{-13}; 
long value5 {13} ;
long value6 {-13} ;
short value7 {13} ;
short value8 {-13} ;
long long value9 {13} ;
long long value10 {-13} ;

cout<<"value1 : "<<value1<<endl;
cout<<"value2 : "<<value2<<endl;
cout<<"size of value1 : "<<sizeof(value1)<<endl;
cout<<"size of value2 : "<<sizeof(value2)<<endl;

// signed

cout<<"signed value3 : "<<value3<<endl;
cout<<"signed value4 : "<<value4<<endl;
cout<<"size of signed value3 : "<<sizeof(value3)<<endl;
cout<<"size of signed value4 : "<<sizeof(value4)<<endl;

// long

cout<<"long value5 : "<<value5<<endl;
cout<<"long value6 : "<<value6<<endl;
cout<<"size of long value5 : "<<sizeof(value5)<<endl;
cout<<"size of long value6 : "<<sizeof(value6)<<endl;

// short 

cout<<"short value7 : "<<value7<<endl;
cout<<"short value8 : "<<value8<<endl;
cout<<"size of short value7 : "<<sizeof(value7)<<endl;
cout<<"size of short value8 : "<<sizeof(value8)<<endl;

// long long

cout<<"long long value9 : "<<value9<<endl;
cout<<"long  long value10 : "<<value10<<endl;
cout<<"size of  long long value9 : "<<sizeof(value9)<<endl;
cout<<"size of long long value10 : "<<sizeof(value10)<<endl;

return 0 ;
}
#include<iostream>
using namespace std;

int main(){

    int a = 4;
    int b= 6;

    cout<<"And operator : "<<(a&b)<<endl;
    cout<<"Or operator : "<<(a|b)<<endl;
    cout<<"Not operator : "<<(~b)<<endl;
    cout<<"Xor operator : "<<(a^b)<<endl;

    // Rigth And Left Shift Concept

    // Rigth Shift

    cout<<"Right Shift : "<<(17>>1)<<endl;   // 17/2 = 8.25
    cout<<"Right Shift : "<<(17>>2)<<endl;   // 17/(2*2) = 4.25 

    // Left Shift

    cout<<"Left Shift : "<<(19<<1)<<endl;   // 19*2 = 38
    cout<<"Left Shift : "<<(19<<2)<<endl;   // 19*2*2 = 76

    // Post Increment And Pre Increment

    int n=7;

    cout<<"Post Increment : "<<n++<<endl;    // 7 ko print kar dega phir increment karega after increment n=8
    cout<<"Pre Increment : "<<++n<<endl;     // n=8 increment kar ke print karega n=9 print karega
 
    // Post Decrement And Pre Decrement 
     
    cout<<"Post Decrement : "<<n--<<endl;   // n=9 print karke n ko decrease kar dega (n=8)
    cout<<"Pre Decrement : "<<--n<<endl;     // n =8 isko decrease kar ke n=7 kardega
}
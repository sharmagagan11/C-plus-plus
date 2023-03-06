#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n for  calculate that it is prime or not " << endl;
    cin >> n;

    bool isprime = 1;

    for(int i = 2 ;i<n ; i++ ){
         // if remainder = 0 this means not a prime number
        if(n%i == 0){
            isprime=0;
            break;
        }
    }
    if(isprime == 0){
        cout<<"it is  not a prime number : "<<n<<endl;   
    }
    else{
        cout<<"it is prime number : "<<n<<endl;
    }
}
#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"enter the value of n for sum calculate "<<endl;
    cin>>n;

    int sum = 0 ;
    
    for(int i=0;i<=n;i++){
        // sum = sum + i ;
        sum += i;
    }

    cout<<"the sum upto n is : "<<sum<<endl;
}
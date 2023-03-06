#include<iostream>
using namespace std;

int main(){

     int n;
     int a=0;
     int b=1;

    cout<<"enter the value of n for calculate Fibonnaci series  "<<endl;
    cin>>n;

    cout<<a<<" "<<b<<" ";

    for(int i=1; i<=n;i++){
        int nextnumber = a+b;
        cout<<nextnumber<<" ";

        a=b;
        b=nextnumber;
    }



}
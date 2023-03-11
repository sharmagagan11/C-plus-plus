#include<iostream>
#include<string>
using namespace std;

int main(){
    string str; 
    cin>>str;

    cout<<str<<endl;

    cout<<"We will check that it is Palindrom or not"<<endl;

    int n ;
    n = str.length();
    bool isPalindrome = true;

    for(int i = 0 ; i<n ; i++){
        if(str[i] != str[n-i-1]){
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
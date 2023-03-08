#include<iostream>
#include<array>
using namespace std;

int main(){
    int basic[3]={1,2,3};
    array<int ,5> a = {1,2,3,4,5};

    int size =a.size();

for(int i=0;i<size;i++){
    cout<<a[i]<<endl;
}
cout<<"Element at 2nd Index is : "<<a.at(2)<<endl;

cout<<"Empty or note : "<<a.empty()<<endl;

cout<<"First Element is : "<<a.front()<<endl;

cout<<"Last Element is : "<<a.back()<<endl;
}
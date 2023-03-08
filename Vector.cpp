#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v;
    vector<int> a(5,1);
    vector<int> last(a);
    
    cout<<"Print a "<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Copy Of Vector into New Vector last : "<<endl;
    cout<<"Print Last Vector :  "<<endl;
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;

cout<<"Size  is : "<<v.capacity()<<endl;

v.push_back(1);

cout<<"Size is : "<<v.capacity()<<endl;

v.push_back(1);

cout<<"Size is : "<<v.capacity()<<endl;

v.push_back(3);

cout<<"Size is : "<<v.capacity()<<endl;


cout<<"Size is : "<<v.capacity()<<endl;

cout<<"Element at 2nd Index is : "<<v.at(2)<<endl;

cout<<"Empty or note : "<<v.empty()<<endl;

cout<<"First Element is : "<<v.front()<<endl;

cout<<"Last Element is : "<<v.back()<<endl;

cout<<"Before POP back is : "<<endl;

for(int i : v){
    cout<<i<<" ";
}
cout<<endl;


v.pop_back();

cout<<" After POP back is : "<<endl;

for(int i : v){
    cout<<i<<" ";
}
cout<<endl;

//cout<<"Last Element is : "<<a.back()<<endl;

cout<<"Befor Clear Size is : "<<v.size()<<endl;
v.clear();
cout<<"After Clear Size is : "<<v.size()<<endl;
}
#include<iostream>
using namespace std;
int main(){
//variable == 
/*
  syntax 
              typename variable_name{ initializer_value}

*/
//int elephant_count;  // it contains any garbage value
//int lion_count{};   // intiallizes to zero
//int dog_count{100};  // intiallizes to 100
//int cat_count{123};   // intiallizes to 123

 //int add_count{dog_count+cat_count};
 //int narrowing_conversion(2.9);
  //float narrowing_conversion{2.9};
   
 //cout<<"the elephant count is : "<<elephant_count<<endl;
 //cout<<"the lion count is : "<<lion_count<<endl;
 //cout<<"the dog count is : "<<dog_count<<endl;
 //cout<<"the cat count is : "<<cat_count<<endl;
 //cout<<"the cat and dog count is : "<<add_count<<endl;
 //cout<<"the narrowing conversion is : "<<narrowing_conversion<<endl;

//     assingment notation

int elephant_count;  // it contains any garbage value
int lion_count= 0;   // intiallizes to zero
int dog_count= 100;  // intiallizes to 100
int cat_count = 123;   // intiallizes to 123

 int add_count =  dog_count+cat_count ;
 int narrowing_conversion = 2.9;
  //float narrowing_conversion{2.9};
   
 cout<<"the elephant count is : "<<elephant_count<<endl;
 cout<<"the lion count is : "<<lion_count<<endl;
 cout<<"the dog count is : "<<dog_count<<endl;
 cout<<"the cat count is : "<<cat_count<<endl;
 cout<<"the cat and dog count is : "<<add_count<<endl;
 cout<<"the narrowing conversion is : "<<narrowing_conversion<<endl;

 // check the size with sizeof

 cout<<"the size of : "<<sizeof(int)<<endl;
 cout<<"size of : "<<sizeof(dog_count)<<endl;

    return 0 ;
}
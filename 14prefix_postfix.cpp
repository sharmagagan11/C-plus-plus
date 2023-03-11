#include <iostream>
using namespace std;
int main()
{
int value=6;

cout<<"the value is incrementing---"<<value++<<endl;
cout<<"the value after increment ---"<<value<<endl;
//  first print then increment 
cout<<"the value is ---"<<++value<<endl;
//first increment then print
cout<<"the value is ---"<<value<<endl;
cout<<"the value is decrementing---"<<value--<<endl;
//first print then decrement
cout<<"the value is ---"<<value<<endl;
cout<<"the value is ---"<<--value<<endl;
// first decrement then print
cout<<"the value is ---"<<value<<endl;

}
// ++value means first increment then print
//value++ means first print then increment 
// --value means first decrement then print
//value-- means first print then decrement 
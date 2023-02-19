#include <iostream>
using namespace std;
int main()
{
    /*
    int age(21);
    cout<<" age :"<< age <<endl;

    cerr<<"error message : something is wrong"<<endl;   // for error print to consol
    clog<<"log message :smething happened"<<endl;       // for log message to print on consol
    */

    /*
    int age1;
    string name;

    cout<<"please type your name and age :"<<endl;
    cin>>name>>age1;

    cout<<"hello "<<name<<" hyou are "<<age1<<" years old"<<endl;

      */
    // data with space

    string full_name;
    int age3;

    cout << "please enter your full name and age" << endl;
    getline(cin, full_name);
    cin >> age3;

    cout << "hello " << full_name << " you are " << age3 << " years old" << endl;
    return 0;
}
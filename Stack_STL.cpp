#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    

    s.push("Gagan");
    s.push("Sharma");

    cout << "Top Element in Stack is : " << s.top() << endl;
    s.pop();
    cout << "Top Element in Stack is : " << s.top() << endl;

    cout << "Size of Stack : " << s.size() << endl;

    cout << "Emty or Not : " << s.empty() << endl;
}

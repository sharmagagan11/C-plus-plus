#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> s;
    

    s.push("Gagan");
    s.push("Sharma");

    cout << "Front Element in Stack is : " << s.front() << endl;
    s.pop();
    cout << "Front Element in Stack is : " << s.front() << endl;

    cout << "Size of Queue : " << s.size() << endl;

    cout << "Emty or Not : " << s.empty() << endl;
}

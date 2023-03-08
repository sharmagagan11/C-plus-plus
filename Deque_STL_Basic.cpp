#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // d.pop_back();
    // cout<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    //}

    cout << "Element at 0th  Index is : " << d.at(0) << endl;

    cout << "Empty or note : " << d.empty() << endl;

    cout << "First Element is : " << d.front() << endl;

    cout << "Last Element is : " << d.back() << endl;

    d.pop_front();
    cout << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "before erase : " << d.size() << endl;      // complexity O(n)
    d.erase(d.begin(), d.begin() + 1);
    cout << "after erase : " << d.size() << endl;
    for (int i : d)
    {
        cout << i << endl;
    }
}
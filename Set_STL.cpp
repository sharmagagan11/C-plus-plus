#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> set;

    set.insert(1);
    set.insert(2);
    set.insert(3);
    set.insert(4);
    set.insert(5);
    set.insert(5);
    set.insert(5);
    set.insert(5);
    set.insert(6);
    set.insert(2);
    set.insert(3);
    set.insert(4);
    set.insert(2);
    set.insert(3);
    set.insert(4);
    for (auto i : set)
    {
        cout << i;
    }
    cout << endl;
    set<int>::iterator it = set.begin();
    it++;
    set.erase(it);
    for (auto j : set)
    {
        cout << j << endl;
    }
    cout << endl;
    cout<<"-5 present or not : "<<set.count(-5)<<endl;

     set<int>::iterator it = set.find(3);
      for (auto it=itr ;it!=setend();it++){
        cout<<*it<<endl;
      }
      cout<<endl;



}

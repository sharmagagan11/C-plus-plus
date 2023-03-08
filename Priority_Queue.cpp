#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> maxi;                           // max heap
    priority_queue<int, vector<int>, greater<int>> min; // max heap

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    maxi.push(5);
    maxi.push(6);

    cout << " Size is : " << maxi.size() << endl;
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << endl;
        maxi.pop();
    }
    cout << endl;

    min.push(1);
    min.push(2);
    min.push(3);
    min.push(4);
    min.push(5);
    min.push(6);

    cout << " Size is : " << min.size() << endl;
    int m = min.size();
    for (int j = 0; j < m; j++)
    {
        cout << min.top() << endl;
        min.pop();
    }
    cout << endl;
   
}

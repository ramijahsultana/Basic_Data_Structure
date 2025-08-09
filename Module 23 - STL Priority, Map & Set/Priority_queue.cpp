#include<bits/stdc++.h>
using namespace std;
int main()
{
    //priority_queue<int> pq; // max heap
    priority_queue<int, vector<int>, greater<int>> pq; // min heap
    pq.push(10);
    pq.push(20);
    pq.push(5);
    pq.push(100);
    cout << pq.size() << endl;;
    while(!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }
    // pq.pop();
    // cout << pq.top() << endl;
    // pq.pop();
    return 0;
}
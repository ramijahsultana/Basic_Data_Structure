#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    //v.pop_back(); // Remove the last element
    vector<int> v1 = {6, 7, 8};
    v.insert(v.begin() + 4, v1.begin(), v1.end()); 
    //v.erase(v.begin()+1);
    v.erase(v.begin()+2, v.begin()+5);
    for(int x : v)
    {
        cout << x << " ";
    }
    return 0;
}
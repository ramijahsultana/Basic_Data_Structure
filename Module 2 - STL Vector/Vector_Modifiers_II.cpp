#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,5,3,2,4,5,6,2};
    
    // replace(v.begin(), v.end()-1, 2, 10);
    // for(int x : v)
    // {
    //     cout << x << " "; 
    // }

    auto it = find(v.begin(), v.end(), 2);
    if(v.end() == it)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found " << endl;
        cout << "Element at index: " << it - v.begin() << endl;
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(5,1);
    v.resize(10, 2);
    v.push_back(3);
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.capacity() << endl; // Output the capacity of the vector 
    return 0;
}
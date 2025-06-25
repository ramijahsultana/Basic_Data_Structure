#include<bits/stdc++.h>
using namespace std;
vector<int> sum(vector<int>& a)
{
    vector<int> result(a.size());
    result[0] = a[0];
    for(int i=1; i<a.size(); i++)
    {
       result[i] = result[i-1] + a[i];
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    vector<int> val = sum(a);
    for(int i=0; i<n; i++)
    {
        cout << val[i] << " ";
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    int val;
    cin >> val;
    a.push_back(val);
    int cur_idx = a.size() - 1;
    
    while(cur_idx != 0)
    {
        int par_idx = (cur_idx -1)/2;
        if(a[par_idx] > a[cur_idx])
          swap(a[par_idx], a[cur_idx]);
        else
            break;
        cur_idx = par_idx;
    }

    for(int x : a)
        cout << x << " ";
    cout << endl;
    return 0;
}
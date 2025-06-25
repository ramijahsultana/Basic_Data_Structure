#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cin.ignore();
    int q;
    cin >> q;
    cin.ignore();
    while(q--)
    {
        int x;
        cin >> x;
        auto it = find(a.begin(), a.end(), x);
        if(it != a.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
    return 0;
}
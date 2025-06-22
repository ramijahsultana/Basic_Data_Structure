#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q ;
    cin >> n >> q;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++)
    {
        cin >> v[i];
    }
   
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        int sum = 0;
        for(int j=l; j<=r; j++)
        {
            sum += v[j];
        }
        cout << sum << endl;
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i =0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i<n; i++)
    {
        int left_sum = 0, right_sum = 0;
        for(int j = 0; j<i; j++)
        {
            left_sum += a[j];
        }
        for(int j = i+1; j<n; j++)
        {
            right_sum += a[j];
        }
        if(left_sum == right_sum)
        {
            cout << i << " ";
            break;
        }
    }

    return  0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;            // type 1: Default initialization
    // vector<int> v(5);              // type 2: Initialize with size 5, all elements are 0
    // v.resize(10);                  // type 3: Resize to 10, new elements are initialized to 0
    // vector<int> v1(5, 1);          // type 4: Initialize with size 5, all elements are 1
    // vector<int> v1{1, 2, 3, 4, 5}; // type 5: Initialize with a list of values
    // vector<int> v2(v1);          // type 6: Copy initialization from another vector

    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v(a, a + 5); // type 7: Initialize from an array
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // cout << v.size() << endl;

    return 0;
}
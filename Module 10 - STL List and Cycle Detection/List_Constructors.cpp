#include <bits/stdc++.h>
using namespace std;
int main()
{
    //list<int> l = {1, 2, 3, 4, 5};
    list<int> l(10, 5);
    list<int> l2(l);
    // int a[] = {6, 7, 8, 9, 10};
    // list<int> l2(a, a + 5); // Using array to initialize list
    for (int val : l)
    {
        cout << val << " ";
    }
    
    return 0;
}
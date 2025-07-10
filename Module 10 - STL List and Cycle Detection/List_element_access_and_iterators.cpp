#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    cout << l.front() << endl;
    cout << l.back() << endl;

    // Accessing elements using iterators
    auto it = l.begin();
    cout << *it << endl; // Output: 1
    it++;
    cout << *it << endl; // Output: 2
    return 0;
}
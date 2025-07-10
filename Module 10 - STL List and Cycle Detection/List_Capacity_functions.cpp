#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1,2,3,4,5};
    cout << l.size() << endl;
  
    l.clear(); // Clear the list
    if(l.empty())
    {
        cout << "List is empty" << endl;
    }
    else
    {
        cout << "List is not empty" << endl;
    }

    l.resize(5, 10);
    for(int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << l.max_size();

    return 0;
}
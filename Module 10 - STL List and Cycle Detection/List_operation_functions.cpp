#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {50,20,60,50,30,20,40,20,10,30};

    //l.remove(20);
    l.sort();
    //l.sort(greater<int>());

    //l.unique(); // Removes consecutive duplicate elements
    l.reverse();
    for(int val : l)
    {
        cout << val << " ";
    }




    return 0;
}
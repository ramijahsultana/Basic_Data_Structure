#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1,2,3,4,3,6};
    list<int> l1;
    //l1 = l; // Assigning an empty list to l
    //l1.assign(l.begin(), l.end());

    //l.push_back(10);    // Adding an element to the end of the list
    //l.push_front(0);   // Adding an element to the front of the list

    //l.pop_back();    // Removing the last element of the list
    //l.pop_front();   // Removing the first element of the list
    
    //l.insert((next(l.begin(), 2)), 10);
    //l.erase(next(l.begin(), 2));
    //l.erase(next(l.begin(), 2) , next(l.begin(), 5));
 
    //replace(l.begin(), l.end(), 3, 10);
 
    auto it = find(l.begin(), l.end(), 3);
    if(it == l.end())
    {
        cout << "Not Found" << endl; 
    }
    else
    {
        cout << "Found" << endl;
    }

    for(int val : l)
    {
        cout << val << " ";
    }



    return 0;
}
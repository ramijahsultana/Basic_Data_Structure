#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for(char c : s)
    {
        freq[c - 'a']++;
    }

    for(int i=0; i<freq.size(); i++)
    {
        if(freq[i] > 0)
        {
            cout << char(i + 'a') << " " << ':' << " " << freq[i] << endl;
        }
    }

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;

//     vector<int> freq(26, 0);

//     // Count frequency
//     for (int i = 0; i < s.size(); i++) {
//         freq[s[i] - 'a']++;
//     }

//     // Print in ascending order
//     for (int i = 0; i < 26; i++) {
//         if (freq[i] > 0) {
//             cout << (char)(i + 'a') << " : " << freq[i] << endl;
//         }
//     }

//     return 0;
// }

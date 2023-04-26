/*
    given n string and q queries
    in each query you are given a string 
    print yes if string is present
    else print no
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unordered_set<string> s;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    int q;
    cin >> q;
    while (q--)
    {
        string str;
        cin >> str;
        if (s.find(str) == s.end())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
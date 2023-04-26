/*
    Nesting : Examples : 1)  map <set<int> , int> m 
                         2) set<pair<int,string>> s
                         3) map<int,set<int>> m 
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Comparisons can also be done with pairs and set

    set<int> s1 = {1, 2, 3};
    set<int> s2 = {2, 3};
    cout << (s1 > s2);

    vector<int> v1 = {1,2} ;
    vector<int> v2 = {1, 2, 3};
    cout << (v1 < v2) << endl
         << endl;
    

    // complex structures

    map<pair<string, string>, vector<int>> m;
    // set<pair<int, int>> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string fn, ln;
        int count;
        cin >> fn >> ln >> count;
        for (int j = 0; j < count; j++)
        {
            int x;
            cin >> x;
            m[{fn, ln}].push_back(x);
        }
        
    }

    for(auto &pr : m){
        auto &fullname = pr.first;
        auto &list = pr.second;
        cout << fullname.first << " " << fullname.second << endl;
        cout << list.size() << endl;
        for(auto &element : list){
            cout << element << " ";
        }
    }
    return 0;
}
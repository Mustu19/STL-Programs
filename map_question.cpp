#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/* 
    print marks in decreasing order and if same marks arrives then print names in alphabetical order
*/

int main()
{
    map<int,multiset<string>> m ;
    int n ;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name; 
        int marks;
        cin >> name >> marks;
        m[marks].insert(name);
    }
    auto cur_it = --m.end();
    while(true){
        auto &students = (*cur_it).second;
        int marks = (*cur_it).first;
        for(auto student : students){
            cout << student << " " << marks << endl;
        }
        if(cur_it == m.begin())
            break;
        cur_it--;
    }

    return 0;
}
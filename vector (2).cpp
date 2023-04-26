#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int, multiset<string>> m;

    int n  ;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string name;
        int marks;
        cin >> name >> marks;
        m[marks].insert(name);
    }

    auto current = --m.end();
    while(true){
        auto &stu = (*current).second;
        auto &mar = (*current).first;

        for(auto it : stu){
            cout << it << " " << mar;
        }
        if(current == m.begin()){
            break;
        }
        current--;
    }

    return 0;
}
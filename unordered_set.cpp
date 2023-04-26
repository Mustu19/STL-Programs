#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// inbuilt implementation - hashmaps are used

void print(unordered_set<string> &s){
    cout<<endl<<s.size()<<endl;
    for(string value : s){
        cout<<value<<endl;
    }
}
int main()
{
    unordered_set<string> s ;
    s.insert("zef");  // 0(1)
    s.insert("dfd");
    s.insert("fdf");
    s.insert("tre");


    auto it = s.find("abcd");  // 0(1)
    if(it != s.end()){
         // cout<<(*it)<<endl;
        s.erase(it);
    }
    else{
        cout<<"No value" ;
    }
    print(s);
    return 0;
}
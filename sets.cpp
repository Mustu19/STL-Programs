/*
    Maps data structure mathi value part remove kari dyo etle sets kevai.
    collections of keys are called keys.
    1) normal sets   (map)
    2) unordered sets (unordered_map)
    3) multiset  (multimap)  
    it uses red black trees to store keys
*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    cout<<endl<<s.size()<<endl;
    for(string value : s){
        cout<<value<<endl;
    }
}
int main()
{
    set<string> s ;
    s.insert("abc");  // log(n)
    s.insert("dfd");
    s.insert("dfd");
    s.insert("hgh");


    auto it = s.find("abcd");  // log(n)
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
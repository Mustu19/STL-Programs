/*
difference between maps and unordered maps
1. inbuilt implementation
2. time complexity
3. valid keys
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string> &m){
    cout<<endl<<m.size()<<endl;
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main()
{
    // printing order is not maintained
    // it uses inbuild hash tables
    // average time complexity is 0(1)
    // we can add complex data types in  maps but not in unordered maps
    unordered_map<int , string> m ;
    m[1] = "abc" ;  // 0(1)
    m[5] = "cdc";
    m[6] = "acd";
    m.insert(make_pair(2,"mk"));
    m.insert({4,"messi"});
    print(m);
    
    return 0;
}
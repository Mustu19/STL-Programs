#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
    cout<<endl<<m.size()<<endl;
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main()
{
    // keys stored are unique
    // keys store karvani ane access karvani time complexity : 0log(n)
    // sorted order ma store thai
    // it uses tress for inbuilt implementation
    map<int , string> m ;
    m[1] = "abc" ; 
    m[5] = "cdc";
    m[6] = "acd";
    m.insert(make_pair(2,"mk"));
    m.insert({4,"messi"});
  //  print(m);

    auto it = m.find(1);  // O(log(n))
    if(it!=m.end()){
        m.erase(it);
    }
     // m.clear() ; // clears the map
    // if(it == m.end()){
    //     cout<<"no value" ;
    // }
    // else{
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    print(m);
    return 0;
}
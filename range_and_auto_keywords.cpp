#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2 ,43, 54 ,44 , 90} ;
    vector<int> :: iterator it ;
    for (it = v.begin() ; it!=v.end(); it++)
    {
        cout<<*it<<" " ;
    }

    // range based loops
    // in the value variable , the values are copied into value variable. Use alias for refernce passing

    for(int value : v){
        cout<<value<<" ";
    }

    // auto keyword - it will catch up datatypes automatically
    // we have not write full iterator declation line
    vector<pair<int,int>> v1 = {{4,5} , {3,6} , {2 ,8}} ;
    for(auto it = v1.begin() ; it!=v1.end() ; it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
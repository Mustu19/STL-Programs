#include<iostream>
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
    // vector memory is contiguous

    vector<pair<int , int >> v1 = {{1,2} , {2,3}, {4, 5}} ;
    vector<pair<int,int>> :: iterator i ;
    for (i = v1.begin(); i!=v1.end(); i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
     for (i = v1.begin(); i!=v1.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    for(pair<int,int> value : v1){
        cout<<value.first<<" " <<value.second<<endl;
    }
    
   return 0;
}
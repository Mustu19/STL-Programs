#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int , string> p ;
   // p = make_pair(19 , "Mustafa");
    p = {3 , "Leo"} ;
    cout<<p.first<<" "<<p.second<<endl;

    pair<int , string> p1 = p ;
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int , int> p_array[3] ;
    for (int i = 0; i < 3; i++)
    {
        int x, y;
        cin>>x>>y;
        p_array[i] = {x , y} ;
    }
    swap(p_array[0] , p_array[2]);
    for (int i = 0; i < 3; i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    
    
    return 0;
}
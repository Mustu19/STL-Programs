#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void printVec(vector<pair<int ,int>> &v){
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i].first<<" "<<v[i].second<<endl ;
//     }
//     cout<<endl;
// }

void printVec(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" " ;
    }
    cout<<endl;
}


int main()
{
    // vector of pair
    // vector<pair<int , int> > v = {{1 ,2}, {2 , 3} , {3 , 4}};
    // printVec(v);

    // // taking values from user
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x, y;
    //     cin>>x>>y;
    //     v.push_back(make_pair(x,y));
    // }
    // printVec(v);
    


    // vector of vector
    int N;
    cin>>N;
    vector<int> v[N] ;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);            
        }
    }
    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }
    
    // vector of vector to be implemented later on...

    return 0;
}
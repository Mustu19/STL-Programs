#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.push_back(8);
}
int main()
{
    vector<int> v ;
    v.push_back(5);
    v.push_back(7);
    
    printVec(v);
    printVec(v);

    v.pop_back();
    vector<int> v1 = v ;
    printVec(v1);
    return 0;
}
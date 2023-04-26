#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// allows repeatation of keys
// uses red black trees for implementaion
// time complexity : O(log(n))

void print(multiset<string> &s)
{
    cout << endl
        << s.size() << endl;
    for (string value : s)
    {
        cout << value << endl;
    }
}
int main()
{
    multiset<string> s;
    s.insert("zef"); // 0(1)
    s.insert("dfd");
    s.insert("dfd");
    s.insert("fdf");
    s.insert("tre");
    s.insert("tre");
    s.insert("aaa");
    s.insert("abab");
    // auto it = s.find("dfd");
    // if(it!=s.end()){
    //     s.erase(it);   // erase only the first value
    // }
    s.erase("dfd"); // erases all the values consists of "dfd"
    print(s);
    return 0;
}
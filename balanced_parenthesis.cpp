#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void balanced(string s){

    stack<char> c;
    for (int i = 0; i < s.length(); i++)
    {
       
        if (s[i] == '(' || s[i] == '{' ||  s[i] == '['){
            c.push(s[i]);
        }
        else if ((s[i] == ')' && c.top() == '(') || (s[i] == '}' && c.top() == '{') || (s[i] == ']' && c.top() == '[')){
            c.pop();
        }
        else
        {
            c.push(s[i]);
        }
    }
    if(c.empty()){
        cout << "Balanced String";
    }
    else{
        cout << "Not balanced";
    }
}
int main()
{
    string s;
    cin >> s;
    balanced(s);
    return 0;
}
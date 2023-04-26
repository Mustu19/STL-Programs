#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// candies problem
int main()
{
    int t ;
    cin >> t;
    while(t--){
        int n, min , count =  0;
        cin >> n >> min;
        multiset<int> m;
        for (int i = 0; i < n; i++)
        {
            int candies;
            cin >> candies;
            m.insert(candies);
        }
        while(min--){
            auto it = m.end();
            it--;
            count += *it;
            m.erase(it);
            m.insert((int)*it/2);
        }
        cout << endl
             << count << endl;
    }

    return 0;
}
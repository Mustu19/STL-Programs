#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
 Intro sort - best sorting algorithms in sorting
 It combines 3 sorting algorithms : 1) quick sort 2) heap sort 3) insertion sort
 Complexity : nlog(n)
*/
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }

    // sort (starting address , ending address na next no address) ;
    sort(arr+2 , arr+n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
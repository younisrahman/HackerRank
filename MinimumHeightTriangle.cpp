#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int lowestTriangle(int trianglebase, int area)
{
    return (2 * area + trianglebase - 1) / trianglebase;
}
int main()
{
    int n, a, b, c, d;
    vector<int> vector;
    set<int> set;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        cout << lowestTriangle(a, b) << endl;
    }
    return 0;
}
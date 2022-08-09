#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int armyGame(int trianglebase, int area)
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
        cout << armyGame(a, b) << endl;
    }
    return 0;
}
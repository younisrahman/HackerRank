#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int armyGame(int n, int m)
{
    int ans = 0;
    if (n != 1)
    {
        n = n % 2 == 0 ? n / 2 : n / 2 + 1;
    }
    if (m != 1)
    {
        m = m % 2 == 0 ? m / 2 : m / 2 + 1;
    }
    ans = n * m;
    return ans;
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
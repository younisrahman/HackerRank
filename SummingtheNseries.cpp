#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int summingSeries(long n)
{
    n %= 1000000007;
    int res = n * n % 1000000007;
    return res;
}

int main()
{
    int n;
    long a, b, c, d;
    vector<int> vector;
    set<int> set;
    cin >> n;
    while (n--)
    {
        cin >> a;
        std::cout << summingSeries(a) << std::endl;
    }
    return 0;
}
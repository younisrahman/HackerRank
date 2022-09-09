int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans = ans + (((i * i) - ((i - 1) * (i - 1))) % 1000000007);
    }
    return ans;
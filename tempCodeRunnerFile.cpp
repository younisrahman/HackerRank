int primes[] = {2,
                    3,
                    5,
                    7,
                    11,
                    13,
                    17,
                    19,
                    23,
                    29,
                    31,
                    37,
                    41,
                    43,
                    47,
                    53,
                    59,
                    61,
                    67,
                    71,
                    73,
                    79,
                    83,
                    89,
                    97};
    int len = sizeof(primes) / sizeof(primes[0]);
    long long ans = 1;
    int count = 0;

    if (n == 1)
        return 0;
    if (n == 1 || n == 2 || n == 3)
        return 1;

    for (int i = 0; i < len; i++)
    {
        std::cout << ans << std::endl;
        ans *= primes[i];
        if (ans <= n)
        {
            count++;
        }
        else
            break;
    }
    return count;
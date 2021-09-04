#include <iostream>

inline const int bottom_up(const int &n, const int &a, const int &b, const int &c)
{
    int dp[n + 1];
    dp[0] = 0;

    for (int i = 1; i <= n; ++i)
    {
        int r1 = INT_MIN;
        int r2 = INT_MIN;
        int r3 = INT_MIN;

        if (i >= a)
        {
            r1 = dp[i - a];
        }
        if (i >= b)
        {
            r2 = dp[i - b];
        }
        if (i >= c)
        {
            r3 = dp[i - c];
        }

        // std::cout << r1 << " " << r2 << " " << r3 << std::endl;
        dp[i] = std::max(std::max(r1, r2), r3) + 1;
    }

    return dp[n];
}

int main()
{
    constexpr int Debugging = false;
    if constexpr (not Debugging)
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
    }

    int n;
    int a;
    int b;
    int c;
    std::cin >> n >> a >> b >> c;

    std::cout << bottom_up(n, a, b, c) << std::endl;
}
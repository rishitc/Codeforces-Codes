#include <iostream>

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
    int count{0};
    std::cin >> n;

    int a[n][2];

    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i][0] >> a[i][1];
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i != j && a[i][0] == a[j][1])
            {
                ++count;
            }
        }
    }

    std::cout << count << '\n';
    return 0;
}

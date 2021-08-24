#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

int main()
{
    constexpr int Debugging = false;
    if constexpr (not Debugging)
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
    }

    int s;
    int n;
    std::cin >> s >> n;

    std::vector<std::pair<int, int>> v(n);

    while (n--)
    {
        std::cin >> v[n].first >> v[n].second;
    }

    std::sort(v.begin(), v.end(),
              [](const std::pair<int, int> &lhs, const std::pair<int, int> &rhs)
              { return lhs.first < rhs.first; });

    int current_strength {s};
    for (const auto &p : v)
    {
        if (p.first >= current_strength)
        {
            std::cout << "NO" << std::endl;
            return 0;
        }
        else
        {
            current_strength += p.second;
        }
    }

    std::cout << "YES" << std::endl;

    return 0;
}

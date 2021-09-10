#include <iostream>
#include <algorithm>

int main()
{
    constexpr int Debugging = false;
    if constexpr (not Debugging) 
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
    }

    int a;
    int b;
    std::cin >> a >> b;

    const int &different_socks_days_count {std::min(a, b)};
    const int &same_socks_days_count {(std::max(a, b) - different_socks_days_count) / 2};

    std::cout << different_socks_days_count << " " << same_socks_days_count << std::endl;
    return 0;
}
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

    int n;
    int m;
    std::cin >> n >> m;

    int min_sticks = std::min(n, m);

    if (min_sticks % 2 == 0)
    {
        std::cout << "Malvika" << std::endl;
    }
    else
    {
        std::cout << "Akshat" << std::endl;
    }

    return 0;
}
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
    std::cin >> n;

    float answer{0};
    float percent;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> percent;
        answer += percent;
    }

    std::cout << answer / n << "\n";

    return 0;
}
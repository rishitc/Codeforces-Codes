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

    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;
        const int answer = (n - 1) / 2;
        std::cout << answer << std::endl;
    }

    return 0;
}
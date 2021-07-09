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

    long long n;
    std::cin >> n;

    std::cout << (n / 2 - (n & 1) * n) << "\n";
    return 0;
}

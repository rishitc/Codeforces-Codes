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

    int count{0};

    int amount;
    std::cin >> amount;

    count += amount / 100;
    amount %= 100;

    count += amount / 20;
    amount %= 20;

    count += amount / 10;
    amount %= 10;

    count += amount / 5;
    amount %= 5;

    count += amount;

    std::cout << count << '\n';

    return 0;
}
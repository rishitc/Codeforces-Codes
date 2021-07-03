#include <iostream>
#include <string>

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

    std::cout << "I hate ";

    for (int i = 0; i < n - 1; ++i)
    {
        if (i & 1)
        {
            std::cout << "that I hate ";
        }
        else
        {
            std::cout << "that I love ";
        }
    }

    std::cout << "it" << "\n";

    return 0;
}
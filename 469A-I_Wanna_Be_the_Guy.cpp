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

    bool level_arr[n]{};
    int level;

    int p_1;
    std::cin >> p_1;

    for (int i = 0; i < p_1; ++i)
    {
        std::cin >> level;
        level_arr[level - 1] = true;
    }

    int p_2;
    std::cin >> p_2;

    for (int i = 0; i < p_2; ++i)
    {
        std::cin >> level;
        level_arr[level - 1] = true;
    }

    for (auto &pass_level : level_arr)
        if (pass_level == false)
        {
            std::cout << "Oh, my keyboard!\n";
            return 0;
        }

    std::cout << "I become the guy.\n";

    return 0;
}
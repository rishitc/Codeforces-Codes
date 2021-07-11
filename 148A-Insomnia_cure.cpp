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

    int ith_dragon_arr[4];
    int dragon_count;
    int damaged_dragon_count{0};

    std::cin >> ith_dragon_arr[0] >> ith_dragon_arr[1] >> ith_dragon_arr[2] >> ith_dragon_arr[3] >> dragon_count;

    for (int dragon = 1; dragon <= dragon_count; ++dragon)
    {
        for (auto &ith_dragon : ith_dragon_arr)
        {
            if (dragon % ith_dragon == 0)
            {
                ++damaged_dragon_count;
                break;
            }
        }
    }

    std::cout << damaged_dragon_count << "\n";

    return 0;
}
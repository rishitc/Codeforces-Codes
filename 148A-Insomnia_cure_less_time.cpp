// TODO: Replace * in function call with LCM
#include <iostream>
#include <cmath>

int dragons_affected(int dragon_count, int ith_dragon)
{
    /*
     This is to handle the case of: every 7th dragon is affected
     when there are in total only 6 dragons
    */
    if (ith_dragon > dragon_count)
        return 0;

    return (dragon_count - ith_dragon) / ith_dragon + 1;
}

int main()
{
    constexpr int Debugging = true;
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

    for (int i = 0; i < 4; ++i)
        damaged_dragon_count += dragons_affected(dragon_count, ith_dragon_arr[i]);

    std::cout << "::" << damaged_dragon_count << std::endl;

    damaged_dragon_count -= dragons_affected(dragon_count, ith_dragon_arr[0] * ith_dragon_arr[1]);
    damaged_dragon_count -= dragons_affected(dragon_count, ith_dragon_arr[0] * ith_dragon_arr[2]);
    damaged_dragon_count -= dragons_affected(dragon_count, ith_dragon_arr[0] * ith_dragon_arr[3]);
    damaged_dragon_count -= dragons_affected(dragon_count, ith_dragon_arr[1] * ith_dragon_arr[2]);
    damaged_dragon_count -= dragons_affected(dragon_count, ith_dragon_arr[1] * ith_dragon_arr[3]);
    damaged_dragon_count -= dragons_affected(dragon_count, ith_dragon_arr[2] * ith_dragon_arr[3]);

    std::cout << "::" << damaged_dragon_count << std::endl;


    damaged_dragon_count += dragons_affected(dragon_count, ith_dragon_arr[0] * ith_dragon_arr[1] * ith_dragon_arr[2]);
    damaged_dragon_count += dragons_affected(dragon_count, ith_dragon_arr[1] * ith_dragon_arr[2] * ith_dragon_arr[3]);
    damaged_dragon_count += dragons_affected(dragon_count, ith_dragon_arr[0] * ith_dragon_arr[1] * ith_dragon_arr[3]);
    damaged_dragon_count += dragons_affected(dragon_count, ith_dragon_arr[0] * ith_dragon_arr[2] * ith_dragon_arr[3]);

    std::cout << "::" << damaged_dragon_count << std::endl;


    damaged_dragon_count -= dragons_affected(dragon_count, ith_dragon_arr[0] * ith_dragon_arr[1] * ith_dragon_arr[2] * ith_dragon_arr[3]);

    std::cout << "::" << damaged_dragon_count << "\n";

    return 0;
}
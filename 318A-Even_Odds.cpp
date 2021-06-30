/**
 * @file 318A-Even_Odds.cpp
 * @author Rishit Chaudhary (@rishitc)
 * @version 1.0
 * @date 2021-06-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <cmath>

int main()
{
    constexpr bool Debugging = false;
    if constexpr (not Debugging)
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
    }

    long long n;
    long long k;

    std::cin >> n >> k;

    /*
        As per the description in the question, 
        `half_n` is the position of the last odd number.
    */
    const long long half_n = std::ceil(static_cast<double>(n) / 2.0);

    if (k > half_n)
    {
        std::cout << 2 * (k - half_n) << "\n";
    }
    else
    {
        std::cout << 2 * k - 1 << "\n";
    }

    return 0;
}
/**
 * @file 1030A-In_Search_of_an_Easy_Problem.cpp
 * @author Rishit Chaudhary (@rishitc)
 * @version 1.0
 * @date 2021-06-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

int main()
{
    constexpr int Debug = 0;
    if constexpr (Debug)
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
    }

    int n;
    bool opinion;
    bool is_hard{false};

    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> opinion;

        is_hard |= opinion;
    }

    if (is_hard)
        std::cout << "HARD"
                  << "\n";
    else
        std::cout << "EASY"
                  << "\n";

    return 0;
}
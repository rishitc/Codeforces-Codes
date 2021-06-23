/**
 * @file 136A-Presents.cpp
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
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    int p;

    std::cin >> n;

    int ans[n];

    for (int i = 1; i < n + 1; ++i)
    {
        std::cin >> p;

        ans[p - 1] = i; // Zero index correction for p
    }

    for (int i = 0; i < n; ++i)
    {
        std::cout << ans[i] << " ";
    }
    std::cout << "\n";
}
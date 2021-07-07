/**
 * @file 467A-George_and_Accommodation.cpp
 * @author Rishit Chaudhary (@rishitc)
 * @version 1.0
 * @date 2021-06-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

int main()
{
    int n;
    int p, q;
    int count{0};
    const int Space_for_George_and_Alex{2};

    std::cin >> n;

    while (n--)
    {
        std::cin >> p >> q;

        if (q - p >= Space_for_George_and_Alex)
        {
            ++count;
        }
    }

    std::cout << count << "\n";
}
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

    int current_points_earned;
    int minimum_points_earned;
    int maximum_points_earned;
    int amazing_performaces_count {0};

    std::cin >> current_points_earned;
    minimum_points_earned = maximum_points_earned = current_points_earned;

    for (--n; n--;)
    {
        std::cin >> current_points_earned;
        if (current_points_earned > maximum_points_earned)
        {
            maximum_points_earned = current_points_earned;
            ++amazing_performaces_count;
        }
        else if (current_points_earned < minimum_points_earned)
        {
            minimum_points_earned = current_points_earned;
            ++amazing_performaces_count;
        }
    }

    std::cout << amazing_performaces_count << std::endl;

    return 0;
}
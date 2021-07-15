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

    int soldier_line[n];
    for (int i = 0; i < n; ++i)
    {
        std::cin >> soldier_line[i];
    }

    int ind_leftmost_greatest_height{0};
    int ind_rightmost_smallest_height{0};

    for (int i = 0; i < n; ++i)
    {
        if (soldier_line[ind_leftmost_greatest_height] < soldier_line[i])
        {
            ind_leftmost_greatest_height = i;
        }
        if (soldier_line[ind_rightmost_smallest_height] >= soldier_line[i])
        {
            ind_rightmost_smallest_height = i;
        }
    }

    int cross_over = ind_rightmost_smallest_height < ind_leftmost_greatest_height ? 1 : 0;

    int answer{(ind_leftmost_greatest_height + (n - 1 - ind_rightmost_smallest_height)) - cross_over};
    std::cout << answer << "\n";

    return 0;
}

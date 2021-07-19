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

    int col_count;
    std::cin >> col_count;

    int cubes_per_col_count[100]{};
    int cubes_count;
    for (int i = 0; i < col_count; ++i)
    {
        std::cin >> cubes_count;
        cubes_per_col_count[cubes_count - 1] += 1;
    }

    int ind_runner{0};
    for (int i = 0; i < col_count; ++i)
    {
        while (cubes_per_col_count[ind_runner] == 0)
        {
            ++ind_runner;
        }
        std::cout << ind_runner + 1 << " ";
        --cubes_per_col_count[ind_runner];
    }

    std::cout << "\n";

    return 0;
}
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

    constexpr int ARRAY_LENGTH = 4;

    int x[ARRAY_LENGTH];
    std::cin >> x[0] >> x[1] >> x[2] >> x[3];

    int max_x_index = 0;
    for (int i = 1; i < ARRAY_LENGTH; ++i) if (x[max_x_index] < x[i]) max_x_index = i;

    for (int i = 0; i < ARRAY_LENGTH; ++i) if (i != max_x_index) std::cout << x[max_x_index] - x[i] << " ";

    return 0;
}
#include <iostream>

inline std::size_t inter_house_distance(const std::size_t &current_house_number,
                                        const std::size_t &next_house_number,
                                        const int &n)
{
    if (current_house_number == next_house_number)
    {
        return 0;
    }
    else if (current_house_number < next_house_number)
    {
        return next_house_number - current_house_number;
    }
    else
    {
        return n - current_house_number + next_house_number;
    }
}

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
    int m;
    std::cin >> n >> m;

    std::size_t total_time{0};
    std::size_t current_house_number{1};
    std::size_t next_house_number;
    for (int i = 0; i < m; ++i)
    {
        std::cin >> next_house_number;
        total_time += inter_house_distance(current_house_number, next_house_number, n);
        current_house_number = next_house_number;
    }

    std::cout << total_time << std::endl;

    return 0;
}
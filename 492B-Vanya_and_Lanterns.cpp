#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

inline double get_max_radius(const std::vector<int> &lantern_positions, const int &l)
{
    double max_radius{std::max(static_cast<double>(lantern_positions.front()),
                               static_cast<double>(l - lantern_positions.back()))};
    for (std::size_t i = 1; i < lantern_positions.size(); ++i)
    {
        const int &previous_lantern_position{lantern_positions[i - 1]};
        const int &current_lantern_position{lantern_positions[i]};
        max_radius = std::max(max_radius,
                              static_cast<double>((current_lantern_position - previous_lantern_position) / 2.0));
    }

    return max_radius;
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
    int l;
    std::cin >> n >> l;

    std::vector<int> lantern_positions(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> lantern_positions[i];
    }

    std::sort(std::begin(lantern_positions), std::end(lantern_positions));

    const double max_radius = get_max_radius(lantern_positions, l);

    std::cout << std::setprecision(9) << max_radius << "\n";

    return 0;
}
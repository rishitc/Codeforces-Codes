#include <iostream>
#include <algorithm>
#include <cmath>

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
    int group_size;
    int group_size_count[4]{};

    constexpr int SizeOneIndex{0};
    constexpr int SizeTwoIndex{1};
    constexpr int SizeThreeIndex{2};
    constexpr int SizeFourIndex{3};

    std::cin >> n;
    while (n--)
    {
        std::cin >> group_size;
        ++group_size_count[group_size - 1];
    }

    int answer = group_size_count[SizeFourIndex] +
                 (group_size_count[SizeTwoIndex] + 1) / 2 +
                 group_size_count[SizeThreeIndex];

    group_size_count[SizeOneIndex] -= (group_size_count[SizeTwoIndex] & 1) * 2;
    group_size_count[SizeOneIndex] -= group_size_count[SizeThreeIndex];

    answer += std::max(0, static_cast<int>(std::ceil(group_size_count[SizeOneIndex] / 4.0)));

    std::cout << answer << "\n";

    return 0;
}
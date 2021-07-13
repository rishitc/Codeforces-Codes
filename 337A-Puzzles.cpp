#include <iostream>
#include <algorithm>
#include <climits>

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

    int puzzle_list[m];

    for (int i = 0; i < m; ++i)
    {
        std::cin >> puzzle_list[i];
    }

    std::sort(puzzle_list, puzzle_list + m);

    int back_ind{0};
    int front_ind{n - 1};
    int answer{INT_MAX};

    for (int i = 0; i < m - n + 1; ++i)
    {
        answer = std::min(answer, puzzle_list[front_ind] - puzzle_list[back_ind]);
        ++front_ind;
        ++back_ind;
    }

    std::cout << answer << "\n";

    return 0;
}

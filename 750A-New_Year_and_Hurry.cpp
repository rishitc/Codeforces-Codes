#include <iostream>
#include <cmath>
#include <algorithm>

int main()
{
    constexpr int Debugging = false;
    if constexpr (not Debugging)
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
    }

    constexpr int time_limit{4 * 60};

    int n;
    int k;
    std::cin >> n >> k;

    const int question_solving_time{time_limit - k};
    const int questions_solved{static_cast<int>(
        (-1 + std::sqrt(1.0 + 4.0 * 2.0 * question_solving_time / 5.0)) / 2.0)};

    std::cout << std::min(questions_solved, n) << std::endl;

    return 0;
}
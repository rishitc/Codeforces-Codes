#include <iostream>
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

    std::size_t n;

    std::cin >> n;

    constexpr unsigned int InitialAnswer{1};

    unsigned int num_list[n];
    unsigned int result{InitialAnswer};
    unsigned int curr_subseg_length{InitialAnswer};

    std::cin >> num_list[0];
    for (std::size_t i = 1; i < n; ++i)
    {
        std::cin >> num_list[i];

        if (num_list[i] >= num_list[i - 1])
        {
            ++curr_subseg_length;
            result = std::max(result, curr_subseg_length);
        }
        else
        {
            curr_subseg_length = 1;
        }
    }

    std::cout << result << "\n";

    return 0;
}
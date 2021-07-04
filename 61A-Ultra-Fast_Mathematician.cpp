#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    constexpr int Debugging = false;
    if constexpr (not Debugging)
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
    }

    std::string num_1;
    std::string num_2;
    std::string answer;

    std::cin >> num_1;
    std::cin >> num_2;

    std::transform(num_1.begin(), num_1.end(), num_2.begin(),
                   std::back_inserter(answer),
                   [](const auto &digit_1, const auto &digit_2) -> char
                   {
                       if (digit_1 == digit_2)
                           return '0';
                       else
                           return '1';
                   });

    std::cout << answer << "\n";

    return 0;
}
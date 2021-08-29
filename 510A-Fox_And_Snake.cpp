#include <iostream>
#include <string>
#include <vector>

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

    const std::string full_body(m, '#');

    std::string right_transistion(m, '.');
    right_transistion.back() = '#';

    std::string left_transistion(m, '.');
    left_transistion.front() = '#';

    std::vector<std::string> answer (n);

    bool is_right_transistion{true};
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            answer[i] = full_body;
        }
        else
        {
            if (is_right_transistion == true)
            {
                answer[i] = right_transistion;
            }
            else
            {
                answer[i] = left_transistion;
            }
            is_right_transistion = not is_right_transistion;
        }
    }

    for (const auto& line : answer)
    {
        std::cout << line << '\n';
    }

    return 0;
}
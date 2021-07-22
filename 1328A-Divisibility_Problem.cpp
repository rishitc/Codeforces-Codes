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

    int t;
    int a;
    int b;
    int answer;

    std::cin >> t;

    for (int i = 0; i < t; ++i)
    {
        std::cin >> a >> b;

        // False is implicitly converted to 0 and True is implicitly converted to 1
        answer = (a / b + (a % b != 0)) * b - a;

        std::cout << answer << "\n";
    }

    return 0;
}
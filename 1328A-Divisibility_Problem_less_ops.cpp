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
    int remainder;

    std::cin >> t;

    while (t--)
    {
        std::cin >> a >> b;

        remainder = a % b;
        // False is implicitly converted to 0 and True is implicitly converted to 1
        answer = (remainder != 0) * (b - remainder);

        std::cout << answer << "\n";
    }

    return 0;
}
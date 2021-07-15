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

    int a, b, c;

    std::cin >> a >> b >> c;

    int answer = a + b + c;
    answer = answer > (a * b * c) ? answer : (a * b * c);
    answer = answer > (a * b + c) ? answer : (a * b + c);
    answer = answer > (a + b * c) ? answer : (a + b * c);
    answer = answer > ((a + b) * c) ? answer : ((a + b) * c);
    answer = answer > (a * (b + c)) ? answer : (a * (b + c));

    std::cout << answer << "\n";

    return 0;
}
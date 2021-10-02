#include <iostream>
#include <cstdlib>

inline const int get_minimum_moves(const int &a, const int &b) {
    int diff = abs(b - a);
    return diff / 10 + (diff % 10 != 0);
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

    int t;
    std::cin >> t;

    while (t--) {
        int a, b;
        std::cin >> a >> b;
        const int result = get_minimum_moves(a, b);
        std::cout << result << '\n';
    }

    return 0;
}
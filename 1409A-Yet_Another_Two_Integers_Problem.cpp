#include <iostream>
#include <cstdlib>

inline const int get_minimum_moves(const int &a, const int &b) {
    int diff = b - a;
    int count = 0;

    for (int i = 10; i != 0 and diff != 0; --i) {
        count += diff / i;
        diff %= i;
    }

    return abs(count);
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
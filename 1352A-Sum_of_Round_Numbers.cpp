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
    std::cin >> t;

    while (t--) {
        int num;
        int count = 0;
        int summands[4];
        int significant_place = 1;

        std::cin >> num;
        while (num) {
            if (num % 10 != 0) {
                summands[count] = num % 10 * significant_place;
                ++count;
            }
            significant_place *= 10;
            num /= 10;
        }

        std::cout << count << '\n';
        for (int i = 0; i < count; ++i) {
            std::cout << summands[i] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}
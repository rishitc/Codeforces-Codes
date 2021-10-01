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

    int a[50];
    int t;
    int n;

    std::cin >> t;

    while (t--) {
        std::cin >> n;

        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }

        std::sort(std::begin(a), std::begin(a) + n);

        int count = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (a[i + 1] - a[i] > 1) {
                ++count;
                break;
            }
        }

        if (count >= 1) {
            std::cout << "NO\n";
        } else {
            std::cout << "YES\n";
        }
    }

    return 0;
}
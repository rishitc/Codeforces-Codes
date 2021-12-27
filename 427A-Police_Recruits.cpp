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

    int n;
    std::cin >> n;

    int event;
    int free_police_officer_count{0};
    int untreated_crimes_count{0};
    for (; n; --n) {
        std::cin >> event;
        if (event == -1) {
            if (free_police_officer_count) --free_police_officer_count;
            else ++untreated_crimes_count;
        } else {
            free_police_officer_count += event;
        }
    }

    std::cout << untreated_crimes_count;
    return 0;
}

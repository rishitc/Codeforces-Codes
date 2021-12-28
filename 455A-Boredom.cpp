#include <iostream>
#include <cstring>

int main()
{
    constexpr int Debugging = false;
    if constexpr (not Debugging) 
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
    }

    constexpr int UPPER_BOUND = 1'00'000;
    constexpr int FREQUENCY_ARR_LENGTH = UPPER_BOUND + 1;
    int n;
    std::cin >> n;


    unsigned long long frequency[FREQUENCY_ARR_LENGTH];
    memset(frequency, 0, sizeof(frequency));
    for (int num; n; --n) {
        std::cin >> num;
        ++frequency[num];
    }

    // std::for_each(std::begin(frequency), std::end(frequency), [](int num) {std::cout << num << ' ';});
    // std::cout << '\n';

    for (long long i = 2; i != FREQUENCY_ARR_LENGTH; ++i) frequency[i] = std::max(frequency[i-1], frequency[i] * i + frequency[i-2]);

    std::cout << frequency[UPPER_BOUND];

    return 0;
}
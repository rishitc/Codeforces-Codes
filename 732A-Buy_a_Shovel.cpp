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

    int k;
    int r;

    std::cin >> k >> r;

    for (int i = 1; i != 10; ++i) {
        if ((i * k) % 10 == 0 or (i * k) % 10 == r) {
            std::cout << i;
            break;
        }
    } 

    return 0;
}

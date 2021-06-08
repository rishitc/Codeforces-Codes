#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    const int len = 14;
    const int possible_values[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    std::cin >> n;

    for (int i = 0; i < len; ++i)
    {
        if (n % possible_values[i] == 0)
        {
            std::cout << "YES\n";
            return 0;
        }
    }
    std::cout << "NO\n";
    return 0;
}
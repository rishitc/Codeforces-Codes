#include <iostream>

bool is_lucky_number(int number)
{
    int digit;
    while (number > 0)
    {
        digit = number % 10;
        if (digit != 4 and digit != 7)
            return false;
        number /= 10;
    }

    return true;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;

    std::cin >> n;

    for (int i = 1; i < 1001; ++i)
    {
        if (is_lucky_number(i))
            if (n % i == 0)
            {
                std::cout << "YES\n";
                return 0;
            }
    }

    std::cout << "NO\n";
    return 0;
}
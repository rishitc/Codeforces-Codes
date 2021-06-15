#include <iostream>
#include <string>

int main()
{
    int year;
    bool flag;

    std::cin >> year;

    while (true)
    {
        char digits[10]{};
        flag = true;
        ++year;
        int year_cpy = year;

        while (year_cpy)
        {
            int digit = year_cpy % 10;
            if (digits[digit])
            {
                flag = false;
                break;
            }
            else
                ++digits[digit];

            year_cpy /= 10;
        }

        if (flag)
            break;
    }

    std::cout << year << "\n";

    return 0;
}
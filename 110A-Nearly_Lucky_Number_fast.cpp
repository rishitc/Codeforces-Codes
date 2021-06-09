#include <iostream>
#include <string>
#include <algorithm>

bool is_lucky_number(int number)
{

    return true;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int digit_count{0};
    std::string n;

    std::cin >> n;

    // Find the number of digits in n
    std::for_each(std::begin(n), std::end(n), [&digit_count](auto &n)
                  {
                      if (n == '4' or n == '7')
                          ++digit_count;
                  });

    // NOTE: As 1 ≤ n ≤ 10^(18) so the largest value that digit_count can have is 19 (don't forget)
    // to count the 1 in 10^(18). So, the only lucky numbers to check are 4 and 7.

    if (digit_count == 4 or digit_count == 7)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
    return 0;
}
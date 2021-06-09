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
    bool result{true};

    std::cin >> n;

    // Find the number of digits in n
    std::for_each(std::begin(n), std::end(n), [&digit_count](auto &n)
                  {
                      if (n == '4' or n == '7')
                          ++digit_count;
                  });
    std::string count = std::to_string(digit_count);
    // std::cout << count << std::endl;
    std::for_each(std::begin(count), std::end(count), [&result](auto &n)
                  {
                      if (n != '4' and n != '7')
                          result = false;
                  });
    if (result)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
    return 0;
}
#include <iostream>
#include <array>
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

    std::array<bool, 26> alphabet{};
    int char_count;
    char text[101];

    std::cin >> char_count;
    std::cin >> text;

    std::for_each(text, text + char_count, [&alphabet](const char &ch)
                  { alphabet[std::tolower(ch) - 'a'] = true; });

    bool result{true};
    std::for_each(std::begin(alphabet), std::end(alphabet), [&result](const bool &value)
                  { result &= value; });

    std::cout << (result ? "YES" : "NO") << std::endl;
    return 0;
}

#include <iostream>
#include <regex>
#include <string>

int main()
{
    constexpr int Debugging = false;
    if constexpr (not Debugging) 
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
    }

    std::string text;
    std::regex caps_lock_pattern("^([a-z][A-Z]*|[A-Z]+)$");

    std::cin >> text;

    if (std::regex_match(text, caps_lock_pattern))
    {
        for (auto &letter: text) {
            if (std::isupper(letter))
                letter = std::tolower(letter);
            else
                letter = std::toupper(letter);
        }
    }

    std::cout << text << "\n";

    return 0;
}
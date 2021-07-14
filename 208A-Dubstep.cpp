#include <iostream>
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

    std::cin >> text;

    for (int i = 0; i < static_cast<int>(text.size()) - 2; ++i)
    {
        if (text[i] == 'W' and text[i + 1] == 'U' and text[i + 2] == 'B')
        {
            text[i] = text[i + 1] = text[i + 2] = ' ';
            i += 2;  // We only add 2 here as the remaining 1 is added when we go back to ++i on top
        }
    }
    std::cout << text;

    return 0;
}

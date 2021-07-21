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

    int count{0};
    std::string text;
    bool letter_occurrence[26]{};

    std::getline(std::cin, text);

    for (auto &letter : text)
    {
        if (letter >= 'a' and letter <= 'z' and letter_occurrence[letter - 'a'] == false)
        {
            ++count;
            letter_occurrence[letter - 'a'] = true;
        }
    }

    std::cout << count << "\n";

    return 0;
}

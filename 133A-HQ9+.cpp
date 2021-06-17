#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string text;
    bool will_output{false};

    std::cin >> text;

    for (const char &letter : text)
    {
        switch (letter)
        {
        case 'H':
        case 'Q':
        case '9':
            will_output = true;
            break;
        }
    }

    if (will_output)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";

    return 0;
}
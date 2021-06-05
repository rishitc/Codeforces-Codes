#include <iostream>

enum class States
{
    s_0, // Start state
    s_1,
    s_2,
    s_3,
    s_4,
    s_5  // Final state
};

int main()
{
    char letter;
    States tracker{States::s_0};

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    while ((letter = std::getchar()) != '\n')
    {
        switch (letter)
        {
        case 'h':
            if (tracker == States::s_0)
                tracker = States::s_1;
            break;
        case 'e':
            if (tracker == States::s_1)
                tracker = States::s_2;
            break;
        case 'l':
            if (tracker == States::s_2)
                tracker = States::s_3;
            else if (tracker == States::s_3)
                tracker = States::s_4;
            break;
        case 'o':
            if (tracker == States::s_4)
                tracker = States::s_5;
            break;
        default:
            continue;
        }
    }

    if (tracker == States::s_5)
        std::cout << "YES"
                  << "\n";
    else
        std::cout << "NO"
                  << "\n";

    return 0;
}
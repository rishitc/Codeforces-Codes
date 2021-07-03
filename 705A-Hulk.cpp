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

    int n;
    std::string text{"I hate "};

    std::cin >> n;

    for (int i = 0; i < n - 1; ++i)
    {
        if (i & 1)
        {
            text.append("that I hate ");
        }
        else
        {
            text.append("that I love ");
        }
    }

    text.append("it");

    std::cout << text << "\n";

    return 0;
}
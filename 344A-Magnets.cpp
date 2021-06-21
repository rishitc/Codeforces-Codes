#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;

    // As there will be atleast one magnet, hence there will be atleast 1 group
    int counter{1};
    std::string current_orientation;
    std::string group_orientation;

    std::cin >> n;

    // Getting the configuration for the very first magnet
    std::cin >> current_orientation;
    group_orientation = current_orientation;

    // Handling the remaining strings
    for (int i = 1; i < n; ++i)
    {
        std::cin >> current_orientation;
        if (current_orientation != group_orientation)
        {
            group_orientation = current_orientation;
            ++counter;
        }
    }

    std::cout << counter << "\n";

    return 0;
}
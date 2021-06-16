#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int person_height;
    int fence_height;
    int total_width{0};
    int n;

    std::cin >> n >> fence_height;

    while (n--)
    {
        std::cin >> person_height;

        if (person_height > fence_height)
        {
            ++total_width;
        }

        ++total_width;
    }

    std::cout << total_width << "\n";

    return 0;
}
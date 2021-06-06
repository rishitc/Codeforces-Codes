#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, t;
    std::string queue;

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::cin >> n >> t;
    std::cin >> queue;

    while (t--)
    {
        for (int i{0}; i < n; ++i)
        {
            if (queue[i] == 'B' and queue[i + 1] == 'G')
            {
                queue[i] = 'G';
                queue[i + 1] = 'B';
                ++i;
            }
        }
    }

    std::cout << queue << std::endl;

    return 0;
}
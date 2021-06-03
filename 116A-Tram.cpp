#include <iostream>
#include <algorithm>

int main()
{
    int n;
    int a, b;
    int ans{0}, runner{0};

    std::cin >> n;

    while (n--)
    {
        std::cin >> a >> b;

        runner += b - a;
        ans = std::max(ans, runner);

        // std::cout << runner << " || " << ans << "\n";
    }

    std::cout << ans << "\n";

    return 0;
}

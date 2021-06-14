#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    int sum{0};
    int my_sum{0};
    int my_count{0};

    const int k_num_of_unique_coin_values = 100;
    int coins_count[k_num_of_unique_coin_values]{};
    int coin_value;

    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> coin_value;
        ++coins_count[coin_value - 1];
        sum += coin_value;
    }

    for (int i = k_num_of_unique_coin_values - 1; i > -1; --i)
    {
        while (coins_count[i])
        {
            my_sum += (i + 1);
            --coins_count[i];
            ++my_count;

            if (my_sum > sum - my_sum)
            {
                std::cout << my_count << "\n";
                return 0;
            }
        }
    }

    return 0;
}
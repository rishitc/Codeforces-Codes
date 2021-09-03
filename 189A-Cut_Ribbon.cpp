#include <iostream>
#include <algorithm>
#include <unordered_map>

#define SENTINEL -1

std::unordered_map<int, int> memo;

int find_max_pieces(const int orig_length, const int acc_lengths[3], const int current_pieces, int &max_pieces)
{
    if (orig_length == 0)
    {
        return max_pieces = std::max(max_pieces, current_pieces);
    }
    else if (memo.find(orig_length) != memo.end())
    {
        return memo[orig_length];
    }
    else
    {
        int local_max_pieces = 0;
        for (int i = 0; i < 3; ++i)
            if (orig_length - acc_lengths[i] >= 0)
                local_max_pieces = std::max(local_max_pieces, find_max_pieces(orig_length - acc_lengths[i], acc_lengths, current_pieces + 1, max_pieces));
        memo[orig_length] = local_max_pieces == 0 ? SENTINEL : local_max_pieces;
        return memo[orig_length];
    }
}

int main() 
{
    constexpr int Debugging = false;
    if constexpr (not Debugging)
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
    }

    int orig_length;
    int acc_lengths[3];

    std::cin >> orig_length >> acc_lengths[0] >> acc_lengths[1] >> acc_lengths[2];
    std::sort(std::begin(acc_lengths), std::end(acc_lengths));

    int max = 0;
    find_max_pieces(orig_length, acc_lengths, 0, max);

    std::cout << max << std::endl;
    return 0;
}
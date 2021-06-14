#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    char match_winner;
    int matches_count;

    std::cin >> matches_count;


    
    /*
    If Anton won more games than Danik, then the value of winner_tracker > 0
    If Danik won more games than Anton, then the value of winner_tracker < 0
    If Anton and Danik won the same number of games, then the value of winner_tracker = 0

    ** Initally we assume that no one has won more number of games compared to the other
    */
    int winner_tracker{0};

    while (matches_count--)
    {
        std::cin >> match_winner;
        switch(match_winner)
        {
            case 'A':
                ++winner_tracker;
                break;
            case 'D':
                --winner_tracker;
                break;
        }
    }

    if (winner_tracker > 0)
        std::cout << "Anton\n";
    else if (winner_tracker < 0)
        std::cout << "Danik\n";
    else
        std::cout << "Friendship\n";

    return 0;
}
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int week = 1, days = 0;

    printf("What's your current weight?: ");

    float iw = get_float();
    float weight = iw;

    printf("What's your goal weight?: ");

    float goal = get_float();

    printf("How many pounds per week will you lose?: ");

    float pace = get_float();

    float down = 0;

    for(int i = 0; i < 200; i++)
    {
        printf("Week %i (Day %i):\n    Current weight: %.1f lbs\n    (down %.1f pounds)\n\n", week, days, weight, down);
        week++;
        weight = weight - pace;
        days = days + 7;

        int lost = iw - weight;
        down = iw - weight;

        if(lost % 10 == 0)
        {
            printf("----By week %i, you'll be down %i pounds.----\n\n", week, lost);
        }
        if(weight < goal)
        {
            printf("****Congratulations! You will reach your goal weight in %i weeks, or about %i months.****\n\n", week, week/4);
            return 0;
        }
    }
}

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int week = 1, days = 0;
    float iw = 215, weight = 215, down = 0;

    for(int i = 0; i < 200; i++)
    {
        printf("Week %i (Day %i):\n    Current weight: %.1f lbs\n    (down %.1f pounds)\n", week, days, weight, down);
        week++;
        weight = weight - 1.5;
        days = days + 7;

        int lost = iw - weight;
        down = iw - weight;

        if(lost % 10 == 0)
        {
            printf("\nYou've lost %i pounds!\n\n", lost);
        }
        if(weight < 140)
        {
            printf("\nCONGRATULATIONS! You've reached your goal weight.\n\n");
            return 0;
        }
    }
}

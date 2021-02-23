#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size;
    do
    {
        start_size = get_int("What is the starting population of llamas?\n");
    }
    while (start_size < 9);

    // TODO: Prompt for end size
    int end_size;
    do
    {
        end_size = get_int("What is the ending population of llamas?\n");
    }
    while (end_size < start_size);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    int current_population = start_size;
    if (current_population == end_size)
    {
        printf("Years: %i\n", 0);
    }
    else
    {
        do
        {
            int llamas_born = (current_population / 3);
            int llamas_lost = (current_population / 4);
            current_population = current_population + llamas_born;
            current_population = current_population - llamas_lost;
            years++;
        }
        while (current_population < end_size);

        // Return number of years
        printf("Years: %i\n", years);
    }
}

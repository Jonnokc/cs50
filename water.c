#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int shower_length = 0;
    int bottles_per_min = 12;

    printf("Enter the length of your shower: ");
    shower_length = GetInt();
    int total_bottles = shower_length * bottles_per_min;

    printf("minutes: %d\n", shower_length);
    printf("bottles: %d\n", total_bottles);

}

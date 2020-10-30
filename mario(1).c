#include <stdio.h>
#include <cs50.h>

//This is program that creates piramid inspired by classic "Mario" game.
int main(void)
{
    //Declaring variable for piramid's height.
    int height;

    //Asking user for valid height value. Only integer value of 1 to 8 is accepted.
    do
    {
        height = get_int("Please input height of the piramid.\nIt should be valid integer between 1 and 8: ");
    }
    while (height != 1 && height != 2 && height != 3 && height != 4 && height != 5 && height != 6 && height != 7 && height != 8);

    //Declaring variable for number of spaces needed to allign piramid properly.
    int space_counter = height - 1;

    for (int i = 0; i < height; i++)
    {

        for (int k = space_counter; k > 0; k--)
        {
            printf(" ");
        }

        space_counter--;

        //Creating left side of piramid.
        for (int j = i; j >= 0; j--)
        {
            printf("#");
        }

        //Printing space between two segments of piramid.
        printf("  ");

        //Creating right side of piramid.
        for (int j = i; j >= 0; j--)
        {
            printf("#");
        }

        printf("\n");
    }
    return 0;
}
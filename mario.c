#include<stdio.h>
#include<cs50.h>

int main (void)

{
    int height;

    do
    {
        height = get_int("Enter the height of pyramid: ");
    }
    while( height < 1 || height > 8);

    for (int row=0; row < height; row++)
    {
        for (int column = 0; column < height; column++)
        {
            if ( row + column < height-1)
            {
                printf(" ");
            }

            else
            {
                printf("#");
            }
        }

        printf(" ");

        for (int x = 0; x <= height-1; x++)
        {
            if ( row - x >= 0)
            {
                printf("#");
            }
        }
        printf("\n");

    }

}

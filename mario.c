#include <stdio.h>
#include <cs50.h>

//Prompts user for pyramid height between 1 and 8
int main(void)
{
    int height;

    do
    {
        height = get_int("What's the height of the pyramid?\n");
    }
    while (height < 1 || height > 8);
    
    //To create a right sided pyramid
    for (int width = 1; width <= height; width++)
    {
        for (int hash = 1; hash <= height; hash++)
        {
            if (hash <= height - width)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}

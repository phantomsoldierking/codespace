#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"q", "w", "e", "r", "t", "y", "u"};

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i],  "q"))
        {
            printf("Found\n");
            return 0;
        }

    }
            printf("Not found\n");
        return 1;
}
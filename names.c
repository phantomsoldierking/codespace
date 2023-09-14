#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"qwert", "asdf", "hy", "hwll", "kdjfh", "kwjdn", "dvb"};

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i],  "asdf") == 0)
        {
            printf("Found\n");
            return 0;
        }

    }
            printf("Not found\n");
        return 1;
}
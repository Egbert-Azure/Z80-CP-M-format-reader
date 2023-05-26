#include <stdio.h>

int main(void)
{
    int const skew_factor = 3;
    int const secs_track = 32;
    int skew_tab[52] = { 0 };
    int i, j, k;

    for (i = j = 0; i < secs_track; ++i, j = (j + skew_factor) % secs_track)
    {
        while (1)
        {
            for (k = 0; k < i && skew_tab[k] != j; ++k);

            if (k < i)
                j = (j + 1) % secs_track;
            else
                break;
        }
        skew_tab[i] = j;
    }

    for (i = 0; i < secs_track; i++)
        printf("%d,", skew_tab[i]);

    putchar('\n');

    return 0;
}
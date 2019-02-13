#include <stdio.h>

int main()
{
    int c[256], d, i;
    for (i = 0; i<256; i++)
        c[i] = 0;
    while ((d = getchar()) != EOF) 
        c[d]++;
    for (i = 0; i<256; i++)
        if (c[i] != 0)
            printf("%c - %d\n", i, c[i]);
    return 0;
}



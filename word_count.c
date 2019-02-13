#include <stdio.h>

int main()
{
    int c, wc = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n')
           wc++;
    }
   printf("%d", wc+1);
} 

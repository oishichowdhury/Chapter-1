#include <stdio.h>

int main()
{
    int c, d;
    d = getchar();    
    while ((c = getchar()) != EOF) {
        if (c == ' ' && d == ' ')
            continue;
        else
            printf("%c", d);
        d = c;
    }
    putchar(d);
    return 0;
}

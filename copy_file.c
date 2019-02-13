#include <stdio.h>

int main()
{
    int inp;
    inp = getchar();
    while (inp != EOF) {
        putchar(inp);
        inp = getchar();
    }
    return 0;
}

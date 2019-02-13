#include <stdio.h>
/* count lines in input */
int main()
{
    int c, nl=0, ns=0, nt=0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
        ++nl;
        if (c == ' ')
        ++ns;
        if (c == '\t')
        ++nt;
    }
    printf("%d %d %d\n", nl, ns, nt);
}

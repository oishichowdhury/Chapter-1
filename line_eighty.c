#include <stdio.h>

int main()
{
    int l, s, length = 0, i = 0;
    char line[200];
    while ((l = getchar()) != EOF) {
        i=0;
        length=0;
        while ((s = getchar()) != '\n') {
            length++;
            line[i] = s;
            i++;
        }
        line[i] = '\0';
        if (length > 80)
            for (i = 0; i != '\0'; i++)
                putchar(line[i]);
        printf("\n");
    }
    return 0;
}

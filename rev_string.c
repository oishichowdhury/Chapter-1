#include <stdio.h>
#include <string.h>

char reverse (char str[]) {
    strrev(str);
    return str;
}

int main()
{
    char word[20];
    gets(word);
    puts(reverse(word));
    return 0;
}

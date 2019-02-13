#include <stdio.h>
#define MAXLINE 1000
/* maximum input line length */
int getline(char line[], int maxline);
void copy(char to[], char from[]);
/* print the longest input*/
int main()
{
    int len;
    int max;

    char line[MAXLINE];
    char longest[MAXLINE];
/*line 
current line length 
maximum length seen so far */
/* current input line */
/* longest line saved here */
    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
    if (len > max) {
        max = len;
        copy(longest, line);
    }
    if (max > 0) /* there was a line */
        printf("%s", longest);
    return 0;
}
/* getline: read a line into s, return length*/
int getline(char s[],int lim)
{
int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
        if (c == '\n') {
            s[i] = c;
            ++i;
        }
   s[i] = '\0';
   return i;
}
/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}


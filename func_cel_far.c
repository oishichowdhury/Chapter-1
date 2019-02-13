#include <stdio.h>

float fun (int cel) {
    return ((9.0/5.0) * cel +32);
}

int main()
{
    int i;
    for (i = 0; i<20; i++)
        printf("%d - %f\n",i, fun(i));
    return 0;
}

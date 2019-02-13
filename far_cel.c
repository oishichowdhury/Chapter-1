#include <stdio.h>

int main()
{
    float far;
    int cel;
    for (cel = 0; cel < 301; cel = cel+10) {
        far = (9.0/5.0) * cel + 32.0;
        printf("%d %f\n", cel, far);
    }
    return 0;
}

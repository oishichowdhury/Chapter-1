#include<stdio.h>

int main()
{
    float cel;
    int far;
    for (far = 0; far < 301; far = far+10) {
        cel = 5.0 * (far-32.0)/9.0;  
        printf("%d  %f\n", far, cel);
    } 
    return 0;
}

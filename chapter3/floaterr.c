/* floaterr.c--demonstrates round-off error */
#include <stdio.h>
void floaterr(void)
{
    float a,b;
    
    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("%f \n", a);
}

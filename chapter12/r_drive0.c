/* r_drive0.c -- test the rand0() function */
/* compile with rand0.c  and call r_drive0 from main        */
#include <stdio.h>
extern unsigned int rand0(void);

void r_drive0(void)
{
    int count;
    
    for (count = 0; count < 5; count++)
        printf("%d\n", rand0());
}

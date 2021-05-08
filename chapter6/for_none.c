/* for_none.c */
#include <stdio.h>
void for_none(void)
{
    int ans, n;
    
    ans = 2;
    for (n = 3; ans <= 25; )
        ans = ans * n;
    printf("n = %d; ans = %d.\n", n, ans);
}

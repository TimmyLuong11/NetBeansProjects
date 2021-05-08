/* for_down.c */
#include <stdio.h>
void for_down(void)
{ 
    int secs;
    
    for (secs = 5; secs > 0; secs--)
        printf("%d seconds!\n", secs);
    printf("We have ignition!\n");
}

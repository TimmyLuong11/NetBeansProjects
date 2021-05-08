/* while1.c -- watch your braces       */
/* bad coding creates an infinite loop */
#include <stdio.h>
void while1(void)
{
    int n = 0;
    
    while (n < 3){
        printf("n is %d\n", n);
        n++;
    }
    printf("That's all this program does\n");
}

/* recur.c -- recursion illustration */
#include <stdio.h>
void up_and_down(int);

void recur(void)
{
    up_and_down(1);
}

void up_and_down(int n)
{
    printf("Level %d: n location %p\n", n, &n); // 1
    printf("The value of n is: %d\n", n);
    if (n < 4)
        up_and_down(n+1);
    printf("LEVEL %d: n location %p\n", n, &n); // 2 
    printf("The value of n is: %d\n", n);
}

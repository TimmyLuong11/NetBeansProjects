/* for_char.c */
#include <stdio.h>
void for_char(void)
{
    char ch;
    
    for (ch = 'a'; ch <= 'z'; ch++)
        printf("The ASCII value for %c is %d.\n", ch, ch);
}

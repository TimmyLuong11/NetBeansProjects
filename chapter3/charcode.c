/* charcode.c-displays code number for a character */
#include <stdio.h>
void charcode(void)
{
    char ch;
    getchar();
    
    printf("Please enter a character.\n");
    scanf("%c", &ch);   /* user inputs character */
    printf("The code for %c is %d.\n", ch, ch);

}

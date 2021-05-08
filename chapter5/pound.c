/* pound.c -- defines a function with an argument   */
#include <stdio.h>
void pound(int n);   // ANSI function prototype declaration

void pound_main(void)
{
    int times = 5;
    char ch = '!';   // ASCII code is 33
    float f = 6.0f;
    
    pound(times);    // int argument
    pound(ch);       // same as pound((int)ch);
    pound(f);        // same as pound((int)f);
}

void pound(int n)    // ANSI-style function header
{                    // says takes one int argument
    while (n-- > 0)
        printf("#");
    printf("\n");
}

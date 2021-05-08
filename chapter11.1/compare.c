/* compare.c -- this will work */
#include <stdio.h>
#include <string.h>   // declares strcmp()
#include <ctype.h>
#define ANSWER "grant"
#define SIZE 40
char * s_gets2(char * st, int n);

void compare(void)
{
    char try[SIZE];
    
    puts("Who is buried in Grant's tomb?");
    s_gets2(try, SIZE);
    
    //tolower(*try);
    while (strcmp(try,ANSWER) != 0)
    {
        puts("No, that's wrong. Try again.");
        s_gets2(try, SIZE);
        //tolower(*try);
    }
    puts("That's right!");
}


char * s_gets2(char * st, int n)
{
    char * ret_val;
    int i = 0;
    
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0'){
            tolower(st[i]);
            i++;
        }
        if (st[i] == '\n')
            st[i] = '\0';
        else // must have words[i] == '\0'
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}
 
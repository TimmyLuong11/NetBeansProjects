/*  getsputs.c  -- using gets() and puts() */
#include <stdio.h>
#define STLEN 81
void getsputs(void)
{
    char words[STLEN];
    
    getchar();
    puts("Enter a string, please.");
    gets(words);  // typical use
    printf("Your string twice:\n");
    printf("%s\n", words);
    puts(words);
    puts("Done.");
}

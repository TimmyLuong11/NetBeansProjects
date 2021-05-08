/*  fgets1.c  -- using fgets() and fputs() */
#include <stdio.h>
#define STLEN 14
void fgets1(void)
{
    char words[STLEN];
    
    getchar();
    puts("Enter a string, please.");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Enter another string, please.");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Done.");

}

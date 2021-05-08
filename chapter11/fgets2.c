/*  fgets2.c  -- using fgets() and fputs() */
#include <stdio.h>
#define STLEN 81
void fgets2(void)
{
    char words[STLEN];
    
    getchar();
    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
        fputs(words, stdout);
    puts("Done.");

}

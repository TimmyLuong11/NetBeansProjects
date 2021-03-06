/*  fgets3.c  -- using fgets() */
#include <stdio.h>
#define STLEN 10
void fgets3(void)
{
    char words[STLEN];
    int i;
    
    getchar();
    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
    {
        i = 0;
        while (words[i] != '\n' && words[i] != '\0')
            i++;
        if (words[i] == '\n')
            words[i] = '\0';
        else // must have words[i] == '\0'
            while (getchar() != '\n')
                continue;
        puts(words);        
    }
    puts("done");

}

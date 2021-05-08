/* countall.c -- using standard I/O */
#include <stdio.h>
#include <stdlib.h> // exit() prototype
#include <ctype.h>
#define SLEN 81    /* from reverse.c */

void countall(void) 
{
    int ch, prev;         // place to store each character as read
    FILE *fp;       // "file pointer"
    unsigned long count = 0, countChar = 0, lines = 0, words = 0;
    int begWord = 0;
    char file[SLEN];  /* from reverse.c */

    puts("Enter the name of the file to be processed:");
    scanf("%80s", file);
    if ((fp = fopen(file,"r")) == NULL)   /* read mode */
    {                              
        printf("count program can't open %s\n", file);
        exit(EXIT_FAILURE);
    }
    
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch,stdout);  // same as putchar(ch);
        if(ch != '\n' && ch != '\r')
        {
            count++;
        }
        if(ch != '\n' && ch != '\r' && !isspace(ch))
        {
            begWord = 1;
            countChar++;
        }
        if(ch == '\n' )
        {
            lines++;
        }
        if(begWord == 1 && isspace(ch))
        {
            words++;
            begWord = 0;
        }
        prev = ch;
        
    }
    fclose(fp);
    if(prev != '\n' && prev != '\r')
    {
        lines++;
        words++;
    }
    printf("\nFile %s has %lu characters (with spaces)\n", file, count);
    printf("File %s has %lu characters (no spaces)\n", file, countChar);
    printf("File %s has %lu lines\n", file, lines);
    printf("File %s has %lu words\n", file, words);
}

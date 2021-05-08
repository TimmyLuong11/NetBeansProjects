/* count.c -- using standard I/O */
#include <stdio.h>
#include <stdlib.h> // exit() prototype
#define SLEN 81    /* from reverse.c */
/* original header: int count(argc, *argv[]) */
void count(void)
{
    int ch;         // place to store each character as read
    FILE *fp;       // "file pointer"
    unsigned long count = 0;
    char file[SLEN];  /* from reverse.c */

    /*Checks whether a file name was included when run from the command prompt
     * The argument count includes the program file name. A count of 2 indicates
     * that an additional parameter was passed 
    if (argc != 2)
    {
        printf("Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    } 
     * The following uses the second parameter as the file name
     * and attempts to open the file
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    } */
    
    /*************************************
     Code from reverse.c included to make the program work from within our IDE
     *************************************/
    puts("Enter the name of the file to be processed:");
    scanf("%80s", file);
    if ((fp = fopen(file,"r")) == NULL)   /* read mode */
    {                              
        printf("count program can't open %s\n", file);
        exit(EXIT_FAILURE);
    }
    
    /* EOF reached when C realizes it tried to reach beyond the end of the file! */
    /* This is good design - see page 573  */
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch,stdout);  // same as putchar(ch);
        count++;
    }
    fclose(fp);
    printf("\nFile %s has %lu characters\n", file, count);
}

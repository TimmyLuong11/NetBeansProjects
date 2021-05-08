// reducto.c -- reduces your files by two-thirds!
// edited from the book version!
#include <stdio.h>
#include <stdlib.h>    // for exit()
#include <string.h>    // for strcpy(), strcat()
#define LEN 40

void reducto(void)
{
    FILE  *in, *out;   // declare two FILE pointers
    int ch;
    char name[LEN];    // storage for output filename
    char file[LEN];  /* from reverse.c - storage for infile name */
    int count = 0;
    
    // set up input
    puts("Enter the name of the file to be processed:");
    scanf("%80s", file);
    if ((in = fopen(file,"r")) == NULL)   /* read mode */
    {                              
        printf("count program can't open %s\n", file);
        exit(EXIT_FAILURE);
    }
    
    // set up output
    strncpy(name,file, LEN - 5); // copy filename
    name[LEN - 5] = '\0';
    strcat(name,".red");            // append .red
    if ((out = fopen(name, "w")) == NULL)
    {                       // open file for writing
        fprintf(stderr,"Can't create output file.\n");
        exit(3);
    }
    // copy data
    while ((ch = getc(in)) != EOF)
        if (count++ % 3 == 0)
            putc(ch, out);  // print every 3rd char
    // clean up
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr,"Error in closing files\n");
}

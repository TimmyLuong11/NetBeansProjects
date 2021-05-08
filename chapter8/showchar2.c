/* showchar2.c -- prints characters in rows and columns */
#include <stdio.h>
void display2(char cr, int lines, int width);
void showchar2(void)
{
    int ch;             /* character to be printed      */
    int rows, cols;     /* number of rows and columns   */
    
    printf("Enter a character and two integers:\n");
    getchar();
    while ((ch = getchar()) != '\n')
    {
        if (scanf("%d %d",&rows, &cols) != 2){
            printf("Incorrect data entered.\n");
            break;
        }
        display2(ch, rows, cols);
        while (getchar() !=  '\n')
            continue;
        printf("Enter another character and two integers;\n");
        printf("Enter a newline to quit.\n");
    }
    printf("Bye.\n");
    
}

void display2(char cr, int lines, int width)
{
    int row, col;
    
    for (row = 1; row <= lines; row++)
    {
        for (col = 1; col <= width; col++)
            putchar(cr);
        putchar('\n');  /* end line and start a new one */
    }
}

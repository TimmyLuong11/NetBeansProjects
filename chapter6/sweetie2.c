// sweetie2.c -- a counting loop
#include <stdio.h>
void sweetie2(void)
{
    const int NUMBER = 22;
    //int count = 1;                     // initialization
    
    for(int count = 1; count <= NUMBER; count++)            // test
    {
        printf("Be my Valentine!\n");  // action
    }
}
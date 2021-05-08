#include <stdio.h>

extern int i;

void another_file(void){
    printf("The value of i in another_file(): %d\n", i);
    i = 25; 
}

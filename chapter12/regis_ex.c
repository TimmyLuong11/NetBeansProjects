#include <stdio.h>

void regis_ex(void){
    int limit = 10; //block level scope
    //store in register if possible
    register int i = 100; 
    
    printf("Value of i before initialization: %d\n", i);
    for(register int i = 0; i < limit; i++)
    {
        printf("\nValue of i within a loop: %d and value of i: ", i);
        for(int i = 0; i < limit; i++)
            printf("%d ",i);
        int j = i;
       printf("\nValue of j within the loop: %d\n", j);

    }
        
    printf("\nValue of i after the loop: %d\n", i);
    //printf("\nValue of j after the loop: %d\n", j);
}

/*
 * Chapter13: chapter13.c
 * Julie Luscomb - Oct 1, 2017, 1:32:47 PM
 */

#include <stdio.h>   //header file for input/output

int menu(void);   //prototype definition
void count(void);
void reducto(void);  
void addaword(void);
void reverse(void);
void append(void);
void randbin(void);
void countall(void); 


int main(void)
{
    int selection = menu();  //variable declaration and initialization via call to menu()
    //The line above also serves as the 'priming' read for the following while loop
    
    
    while(selection != 99) {
    
        // The switch statement is similar to a chained if-else except conditions fall through in C!
        switch(selection) {

        case 1:
           count();
           break;  
           
        case 2:
            reducto(); 
            break;
         
        case 3:  
            addaword();  
            break;
            
        case 4:
            reverse(); 
            break;   

        case 5:
            append(); 
            break;            
           
        case 6:  
            randbin();
            break;           

        case 7:    
            countall();
            break;

           			
         default: /* Optional - but a good idea expecially if you have no other error catching! */
            printf("Please enter a valid selection.\n");
        }
        
    selection = menu();    // get the next menu selection, otherwise, you have an eternal loop!
    }
    
   return 0;
}
 
int menu(void) {
    int choice = 99;
    printf("***************************\n");
    printf(" 1. count\n");
    printf(" 2. reducto\n");
    printf(" 3. addaword \n");
    printf(" 4. reverse\n");
    printf(" 5. append \n");
    printf(" 6. randbin\n");
    printf(" 7. countall\n");
    printf("99. Exit\n");
    printf("Please select number and press enter:\n");
    printf("***************************\n");
    scanf("%d", &choice);
    getchar();
    return choice;   
}

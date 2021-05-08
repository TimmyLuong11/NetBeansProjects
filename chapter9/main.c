/*
 * Chapter9: chapter9.c
 * Julie Luscomb - Oct 1, 2017, 1:32:47 PM
 */

#include <stdio.h>   //header file for input/output

int menu(void);   //prototype definition
void lethead1(void);
void lethead2(void);
void lesser(void);
void misuse(void);
void proto(void);
void recur(void);
void factor(void);
void binary(void);
void usehotel(void);
void loccheck(void);
void swap1(void);
void swap2(void);
void swap3(void);


void lethead3(void);

int main(void)
{
    int selection = menu();  //variable declaration and initialization via call to menu()
    //The line above also serves as the 'priming' read for the following while loop
    
    
    while(selection != 99) {
    
        // The switch statement is similar to a chained if-else except conditions fall through in C!
        switch(selection) {

        case 1:
           lethead1();
           break;  
           
        case 2:
            lethead2(); 
            break;
         
        case 3:  
            lesser();  
            break;
            
        case 4:
            misuse(); 
            break;   

        case 5:
            proto(); 
            break;            
           
        case 6:  
            recur(); 
            break;           

        case 7:  
            factor();  
            break;

        case 8:
           binary();   
            break;  
           
        case 9:
           usehotel(); 
            break;
         
        case 10: 
            loccheck();
            break;
           
        case 11:  
            swap1();
            break;           

        case 12:
            swap2();
            break;    
 
        case 13:  
            swap3();
            break;
           
        case 14:  
            break;           

        case 15:
            break;  
            
        case 16: 
            //lethead3();
            break;
           
        case 17:  
            break;           

        case 18:
            break;   
  
        case 19:
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
    printf(" 1. LetterHead1\n");
    printf(" 2. LetterHead2\n");
    printf(" 3. Lesser \n");
    printf(" 4. Misuse\n");
    printf(" 5. Proto\n");
    printf(" 6. Recur\n");
    printf(" 7. Factor\n");
    printf(" 8. Binary \n");
    printf(" 9. UseHotel\n");
    printf("10. Loc Check \n");
    printf("11. Swap 1 \n");
    printf("12. Swap 2\n");   
    printf("13. Swap 3\n");
    printf("14.  \n");
    printf("15. \n");  
    printf("16. LetterHead3\n");
    printf("17.  \n");
    printf("18. \n");  
    printf("19.  \n");
    

    printf("99. Exit\n");
    printf("Please select number and press enter:\n");
    printf("***************************\n");
    scanf("%d", &choice);
    return choice;   
}
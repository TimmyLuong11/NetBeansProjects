/*
 * Chapter7: chapter8.c
 * Julie Luscomb - Oct 1, 2017, 1:32:47 PM
 */

#include <stdio.h>   //header file for input/output

int menu(void);   //prototype definition
void echo(void);
void echo_eof(void);
void file_eof(void);
void guess(void);
void newguess(void);
void showchar1(void);
void showchar2(void);
void checking(void);
void menuette(void);

int main(void)
{
    int selection = menu();  //variable declaration and initialization via call to menu()
    //The line above also serves as the 'priming' read for the following while loop
    
    
    while(selection != 99) {
    
        // The switch statement is similar to a chained if-else except conditions fall through in C!
        switch(selection) {

        case 1:
           echo();
           break;  
           
        case 2:
            echo_eof(); 
            break;
         
        case 3:  
            file_eof();  
            break;
            
        case 4:
            guess(); 
            break;   

        case 5:
            newguess(); 
            break;            
           
        case 6:  
            showchar1(); 
            break;           

        case 7:  
            showchar2();  
            break;

        case 8:
           checking();   
            break;  
           
        case 9:
           menuette(); 
            break;
         
        case 10:  
            break;
           
        case 11:  
            break;           

        case 12:
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
    printf(" 1. Echo\n");
    printf(" 2. Echo EOF 1\n");
    printf(" 3. File EOF \n");
    printf(" 4. Guess\n");
    printf(" 5. New Guess\n");
    printf(" 6. Show Char 1\n");
    printf(" 7. Show Char 2\n");
    printf(" 8. Checking \n");
    printf(" 9. Menuette\n");
    printf("10.  \n");
    printf("11.  \n");
    printf("12. \n");    

    printf("99. Exit\n");
    printf("Please select number and press enter:\n");
    printf("***************************\n");
    scanf("%d", &choice);
    return choice;   
}
/*
 * Chapter4: chapter4.c
 * Julie Luscomb - Aug 14, 2017, 1:20:48 PM
 */

#include <stdio.h>   //header file for input/output

int menu(void);   //prototype definition
void talkback(void);
void praise1(void);
void praise2(void);
void pizza(void);
void defines(void);
void printout(void);
void width(void);
void floats(void);
void flags(void);
void stringf(void);
void intconv(void);
void floatcnv(void);
void prntval(void);
void longstrg(void);
void input(void);
void varwid(void);
void skip2(void);

int main(void)
{
    int selection = menu();  //variable declaration and initialization via call to menu()
    //The line above also serves as the 'priming' read for the following while loop
    
    
    while(selection != 99) {
    
        // The switch statement is similar to a chained if-else except conditions fall through in C!
        switch(selection) {

        case 1:
            talkback();
           break;  
           
        case 2:
            praise1();
            break;
         
        case 3:
            praise2();
            break;
           
        case 4:
            pizza(); 
            break;           

        case 5:
            //defines - cool but not needed
            break;

        case 6:
            //printout - redundant
            break;  
           
        case 7:
            width();
            break;
         
        case 8:  
            floats();
            break;
           
        case 9:
            flags();
            break;           

        case 10:
            stringf();
            break;

        case 11:
            intconv();
            break;  
           
        case 12:
            break;       
           
        case 13: 
            prntval();
            break;

        case 14:
            break;  
           
        case 15:
            input();
            break;    
           
        case 16:  
            varwid();
            break;

        case 17:
            break;          
           
         default: /* Optional - but a good idea expecially if you have no other error catching! */
            printf("Please enter a valid selection.\n");
        }
        
    selection = menu();    // get the next menu selection, otherwise, you have an eternal loop!
    }
    
   return 0;
}
 
int menu(void) {
    int choice = 10;
    printf("***************************\n");
    printf(" 1. Talk Back \n");
    printf(" 2. Praise1 \n");
    printf(" 3. Praise2 \n");
    printf(" 4. Pizza \n");
    printf(" 5. Defines \n");
    printf(" 6. Printout \n");
    printf(" 7. Width \n");
    printf(" 8. Floats \n");
    printf(" 9. Flags \n");
    printf("10. Stringf \n");
    printf("11. Int Conversion \n");
    printf("12. Float Conversion \n");    
    printf("13. Print Value \n");
    printf("14. Long String \n");
    printf("15. Input \n");
    printf("16. Variable Width \n");
    printf("17. Skip2 \n");      
    printf("99. Exit\n");
    printf("Please select number and press enter:\n");
    printf("***************************\n");
    scanf("%d", &choice);
    return choice;   
}
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * Chapter3: chapter3.c
 * Julie Luscomb - Aug 13, 2017, 11:18:09 AM
 */

#include <stdio.h>   //header file for input/output

int menu(void);   //prototype definition
void platinum(void);
void print1(void);
void bases(void);
void toobig(void);
void print2(void);
void charcode(void);
void altnames(void);
void showf_pt(void);
void floaterr(void);
void typesize(void);
void badcount(void);
void escape(void);
void conversion(void);

int main(void)
{
    int selection = menu();  //variable declaration and initialization via call to menu()
    //The line above also serves as the 'priming' read for the following while loop
    
    
    while(selection != 99) {
    
        // The switch statement is similar to a chained if-else except conditions fall through in C!
        switch(selection) {

        case 1:
            platinum();
            break;  
           
        case 2:
            print1();
            break;
         
        case 3:
            bases();
            break;
           
        case 4:
            toobig();
            break;           

        case 5:  
            print2();
            break;

        case 6:
            charcode();
            break;  
           
        case 7:
            altnames();
            break;
         
        case 8:
            showf_pt();
            break;
           
        case 9:
            floaterr();
            break;           

        case 10: 
            typesize();
            break;

        case 11:
            badcount();
            break;  
           
        case 12:
            escape();
            break;  
            
        case 13:
            conversion();
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
    printf(" 1. Platinum \n");
    printf(" 2. Print1 \n");
    printf(" 3. Bases \n");
    printf(" 4. Too big \n");
    printf(" 5. Print2 \n");
    printf(" 6. Charcode \n");
    printf(" 7. Altnames \n");
    printf(" 8. Show Floating Pt \n");
    printf(" 9. Float Error\n");
    printf("10. Type sizes \n");
    printf("11. Bad count \n");
    printf("12. Escape sequence \n");  
    printf("13. Conversion \n");  
    printf("99. Exit\n");
    printf("Please select number and press enter:\n");
    printf("***************************\n");
    scanf("%d", &choice);
    return choice;   
}

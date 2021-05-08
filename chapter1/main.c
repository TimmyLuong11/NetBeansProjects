/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * Menu driver for practice C programming files
 * Each C project must have one - and ONLY one - main() function
 * The main() function serves as the starting point
 * Steps to add a practice file:
 * 1. Right-click Source Files -> New -> C Source File -> provide name and select 'c' extension.
 * 2. Write your code. For the chapter practice files, substitute void somename(void) instead of int main(void). Omit the return. Save.
 * 3. Add the prototype definition.
 * 4. Add a menu option.
 * 5. Add a case block. Save.
 * 6. Run project.
 * 7. Debug as needed.
 */


#include <stdio.h>   //header file for input/output

int menu(void);   //prototype definition
void hello(void);  
void concrete(void); 
void extension(void); 
void dogs(void); 
void macroMuscle(void); 


int main(void)
{
    int selection = menu();  //variable declaration and initialization via call to menu()
    //The line above also serves as the 'priming' read for the following while loop
    
    while(selection != 99) {
    
        // The switch statement is similar to a chained if-else except conditions fall through in C!
        switch(selection) {

        case 1:
            hello();
            break; /* optional, but the remaining code will execute if omitted! */

        case 2:
            break; 
           
        case 3:
            break; 

        case 4:
            dogs();
            break;    
           
        case 5:
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
    printf(" 1. Hello World Program\n");
    printf(" 2. Concrete Program\n");    
    printf(" 3. Extension Program\n");
    printf(" 4. Dogs Program\n");    
    printf(" 5. MacroMuscle Program\n");    
    printf("99. Exit\n");
    printf("Please select number and press enter:\n");
    printf("***************************\n");
    scanf("%d", &choice);
    return choice;   
}
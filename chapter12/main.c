/*
 * Chapter12: chapter12.c
 * Julie Luscomb - Oct 1, 2017, 1:32:47 PM
 */

#include <stdio.h>   //header file for input/output

int menu(void);   //prototype definition
void auto_ex(void);
void regis_ex(void);   //first occurrence of s_gets()
void static_ext_ex(void);
void static_int_ex(void);
void static_no_link(void);
void manydice(void);



int main(void)
{
    int selection = menu();  //variable declaration and initialization via call to menu()
    //The line above also serves as the 'priming' read for the following while loop
    
    
    while(selection != 99) {
    
        // The switch statement is similar to a chained if-else except conditions fall through in C!
        switch(selection) {

        case 1:
           auto_ex();
           break;  
           
        case 2:
            regis_ex(); 
            break;
         
        case 3:  
            static_ext_ex();  
            break;
            
        case 4:
            static_int_ex(); 
            break;   

        case 5:
            static_no_link(); 
            break;            
           
        case 6:  
            manydice();
            break;           

        case 7:    
            break;

        case 8:  
            break;  
           
        case 9:
            break;
         
        case 10:  
            break;
           
        case 11:  
            break;           

        case 12:
            break;                  
         
        case 13:  
            break;
           
        case 14:  
            break;           

        case 15:
            break;
         
        case 16:  
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
    printf(" 1. auto_ex\n");
    printf(" 2. regis_ex\n");
    printf(" 3. static_ext_ex \n");
    printf(" 4. static_int_ex\n");
    printf(" 5. static_no_link \n");
    printf(" 6. Many Dice\n");
    printf(" 7. \n");
    printf(" 8. \n");
    printf(" 9. \n");
    printf("10. \n");
    printf("11. \n");
    printf("12. \n");
    printf("13. \n");    
    printf("14. \n");
    printf("15. \n");
    printf("16. \n");
    printf("17. \n"); 
    printf("18. \n");
    printf("19. \n");
	
    printf("99. Exit\n");
    printf("Please select number and press enter:\n");
    printf("***************************\n");
    scanf("%d", &choice);
    getchar();
    return choice;   
}


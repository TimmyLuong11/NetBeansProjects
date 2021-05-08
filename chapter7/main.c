/*
 * Chapter7: chapter7.c
 * Julie Luscomb - Oct 1, 2017, 1:32:47 PM
 */

#include <stdio.h>   //header file for input/output

int menu(void);   //prototype definition
void colddays(void);
void cypher1(void);
void cypher2(void);
void electric(void);
void divisors(void);
void chcount(void);
void wordcnt(void);
void paint(void);
void skippart(void);
void breakex(void);
void animals(void);
void vowels(void);
void commission(void);


int main(void)
{
    int selection = menu();  //variable declaration and initialization via call to menu()
    //The line above also serves as the 'priming' read for the following while loop
    
    
    while(selection != 99) {
    
        // The switch statement is similar to a chained if-else except conditions fall through in C!
        switch(selection) {

        case 1:
           colddays();
           break;  
           
        case 2:
           cypher1(); 
            break;
         
        case 3:  
          cypher2();  
            break;
            
        case 4:
           electric(); 
           break;               
           
        case 5:  
           divisors(); 
           break;           

        case 6:  
          chcount();  
            break;

        case 7:
         wordcnt();   
         break;  
           
        case 8:
           paint(); 
            break;
         
        case 9:  
          skippart();              
          break;
           
        case 10:  
           breakex(); 
           break;           

        case 11:
           animals(); 
           break;    
                    
        case 12:  
            vowels();
            break;

        case 13:  
            commission();
            break;

        case 14:  

            break;

        case 15:  

            break;

        case 16:  
  
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
    int choice = 99;
    printf("***************************\n");
    printf(" 1. Cold Days\n");
    printf(" 2. Cypher 1\n");
    printf(" 3. Cypher 2\n");
    printf(" 4. Electric\n");
    printf(" 5. Divisors\n");
    printf(" 6. Char Count\n");
    printf(" 7. Word Count\n");
    printf(" 8. Paint \n");
    printf(" 9. Skip Part\n");
    printf("10. Break Example\n");
    printf("11. Animals \n");
    printf("12. Vowels\n");    
    printf("13. Commission\n");
    printf("14. \n");
    printf("15. \n");
    printf("16. \n");
    printf("17. \n");  
 
    printf("99. Exit\n");
    printf("Please select number and press enter:\n");
    printf("***************************\n");
    scanf("%d", &choice);
    return choice;   
}
/*
 * Chapter5: chapter5.c
 * Julie Luscomb - Aug 14, 2017, 1:32:47 PM
 */

#include <stdio.h>   //header file for input/output

int menu(void);   //prototype definition
void summing(void);
void when(void);
void while1(void);
void while2(void);
void cmpflt(void);
void t_and_f(void);
void truth(void);
void trouble(void);
void boolean(void);
void sweetie1(void);
void sweetie2(void);
void for_cube(void);
void postage(void);
void zeno(void);
void do_while(void);
void entry(void);
void rows1(void);
void rows2(void);
void scores_in(void);
void main_power(void);
/* Additional For Loops - pages 210 - 214 */
void for_down(void);
void for_13s(void);
void for_char(void);
void for_geo(void);
void for_wild(void);
void for_none(void);
void for_show(void);


int main(void)
{
    int selection = menu();  //variable declaration and initialization via call to menu()
    //The line above also serves as the 'priming' read for the following while loop
    
    
    while(selection != 99) {
    
        // The switch statement is similar to a chained if-else except conditions fall through in C!
        switch(selection) {

        case 1:
           summing();  
           break;  
           
        case 2:
           when();
           break;
         
        case 3:  
           while1();
           break;
            
        case 4:
           while2();
           break;               
           
        case 5:  
           cmpflt();
           break;           

        case 6:  
           t_and_f();
           break;

        case 7:
           truth();
           break;  
           
        case 8:
           trouble();
           break;
         
        case 9:  
           boolean();            
           break;
           
        case 10:  
           sweetie1();
           break;           

        case 11:
           sweetie2();
           break;    
                    
        case 12:  
           for_cube();
           break;

        case 13:
           postage();
           break;  
           
        case 14:
           zeno();
           break;       
           
        case 15:  
           do_while();
           break;

        case 16:
           entry();
           break;

        case 17:
           rows1();
           break;    
           
         case 18:
           rows2();
           break; 
            
        case 19:
           scores_in();
           break; 

        case 20:
           main_power();
           break; 

        /* Additional For Loops - pages 210 - 214 */
            
        case 21:
            for_down();
            break; 

        case 22:
            for_13s();
            break; 

        case 23:
            for_char();
            break; 

        case 24:
            for_geo();
            break; 

        case 25:
            for_wild();
            break; 

        case 26:
            for_none();
            break;   
            
            case 27:
              for_show();
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
    printf(" 1. Summing \n");
    printf(" 2. When \n");
    printf(" 3. While1 \n");
    printf(" 4. While2 \n");
    printf(" 5. Cmpflt \n");
    printf(" 6. T_and_f \n");
    printf(" 7. Truth \n");
    printf(" 8. Trouble \n");
    printf(" 9. Boolean \n");
    printf("10. Sweetie1 \n");
    printf("11. Sweetie2 \n");
    printf("12. For Cube \n");    
    printf("13. Postage \n");
    printf("14. Zeno  \n");
    printf("15. Do While \n");
    printf("16. Entry \n");
    printf("17. Rows1 \n"); 
    printf("18. Rows2 \n"); 
    printf("19. Scores_in \n"); 
    printf("20. Main Power \n"); 
    
    /* Additional For Loops - pages 210 - 214 */
    printf("21. For Down \n"); 
    printf("22. For 13s \n"); 
    printf("23. For Char \n"); 
    printf("24. For Geo \n"); 
    printf("25. For Wild \n"); 
    printf("26. For None \n");
    printf("27. For Show \n"); 
    
 
    printf("99. Exit\n");
    printf("Please select number and press enter:\n");
    printf("***************************\n");
    scanf("%d", &choice);
    return choice;   
}
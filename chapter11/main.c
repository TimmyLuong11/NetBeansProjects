/*
 * Chapter10: chapter11a.c - First half of chapterj11
 * Julie Luscomb - Oct 1, 2017, 1:32:47 PM
 */

#include <stdio.h>   //header file for input/output

int menu(void);   //prototype definition
void strings1(void);
void strptr(void);
void addresses(void);
void arrchar(void);
void p_and_s(void);
void getsputs(void);
void fgets1(void);
void fgets2(void);
void fgets3(void);
void s_gets(void);
void scan_str(void);
void put_out(void);
void nono(void);
void put_put(void);


int main(void)
{
    int selection = menu();  //variable declaration and initialization via call to menu()
    //The line above also serves as the 'priming' read for the following while loop
    
    
    while(selection != 99) {
    
        // The switch statement is similar to a chained if-else except conditions fall through in C!
        switch(selection) {

        case 1:
           strings1();
           break;  
           
        case 2:
            strptr(); 
            break;
         
        case 3:  
            addresses();  
            break;
            
        case 4:
            arrchar(); 
            break;   

        case 5:
            p_and_s(); 
            break;            
           
        case 6:  
            getsputs(); 
            break;           

        case 7:  
            fgets1();  
            break;

        case 8:
           fgets2();   
            break;  
           
        case 9:
           fgets3(); 
            break;
         
        case 10:  
            s_gets();
            break;
           
        case 11:  
            scan_str();
            break;           

        case 12:
            put_out();
            break;                  
         
        case 13:  
            nono();
            break;
           
        case 14:  
            printf("put1() is called from put_put()");
            break;           

        case 15:
            printf("put2() is called from put_put()");
            break;
         
        case 16:  
            put_put();
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
    printf(" 1. strings1\n");
    printf(" 2. strptr\n");
    printf(" 3. addresses \n");
    printf(" 4. arrchar\n");
    printf(" 5. p_and_s \n");
    printf(" 6. getsputs\n");
    printf(" 7. fgets1\n");
    printf(" 8. fgets2\n");
    printf(" 9. fgets3 \n");
    printf("10. s_gets\n");
    printf("11. scan_str\n");
    printf("12. put_out \n");
    printf("13. nono \n");    
    printf("14. put1 - call put_put\n");
    printf("15. put2 - call put_put \n");
    printf("16. put_put \n");
    printf("17. \n"); 
    printf("18. \n");
    printf("19. \n");
	
    printf("99. Exit\n");
    printf("Please select number and press enter:\n");
    printf("***************************\n");
    scanf("%d", &choice);
    return choice;   
}

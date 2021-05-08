/*
 * Chapter11: chapter11b.c - Second half of chapter 11
 * Julie Luscomb - Oct 1, 2017, 1:32:47 PM
 */

#include <stdio.h>   //header file for input/output

char * s_gets(char * st, int n);  // function included at end of this file
int menu(void);   //prototype definition
void test_fit(void);
void str_cat(void);   //first occurrence of s_gets()
void join_chk(void);
void nogo(void);
void compare(void);
void compback(void);
void quit_chk(void);
void starsrch(void);
void copy1(void);
void copy2(void);
void copy3(void);
void format(void);
void sort_str(void);
void mod_str(void);
//void repeat(void);
//void hello(void);
void strcnvt(void);


int main(void)
{
    int selection = menu();  //variable declaration and initialization via call to menu()
    //The line above also serves as the 'priming' read for the following while loop
    
    
    while(selection != 99) {
    
        // The switch statement is similar to a chained if-else except conditions fall through in C!
        switch(selection) {

        case 1:
           test_fit();
           break;  
           
        case 2:
            str_cat(); 
            break;
         
        case 3:  
            join_chk();  
            break;
            
        case 4:
            nogo(); 
            break;   

        case 5:
            compare(); 
            break;            
           
        case 6:  
            compback(); 
            break;           

        case 7:  
            quit_chk();  
            break;

        case 8:
            starsrch();   
            break;  
           
        case 9:
           copy1(); 
            break;
         
        case 10:  
            copy2();
            break;
           
        case 11:  
            copy3();
            break;           

        case 12:
            format();
            break;                  
         
        case 13:  
            sort_str();
            break;
           
        case 14:  
            mod_str();
            break;           

        case 15:
            //repeat(); new project, compile and run from command line
            break;
         
        case 16:  
            //hello(); new project, type program, compile and run from command line
            break;
           
        case 17:
            strcnvt();			
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
    printf(" 1. test_fit\n");
    printf(" 2. str_cat\n");
    printf(" 3. join_chk \n");
    printf(" 4. nogo\n");
    printf(" 5. compare \n");
    printf(" 6. compback\n");
    printf(" 7. quit_chk\n");
    printf(" 8. starsrch\n");
    printf(" 9. copy1 \n");
    printf("10. copy2\n");
    printf("11. copy3\n");
    printf("12. format \n");
    printf("13. sort_str \n");    
    printf("14. mod_str\n");
    printf("15. Repeat: Use new project, compile and run from prompt! \n");
    printf("16. Hello: Use new project, compile and run from prompt! \n");
    printf("17. strcnvt\n"); 
    printf("18. \n");
    printf("19. \n");
	
    printf("99. Exit\n");
    printf("Please select number and press enter:\n");
    printf("***************************\n");
    scanf("%d", &choice);
    getchar();
    return choice;   
}
 /*Put this function ONE place and then include the prototype for each file
   It is better to use header files - but this approach taken to make things more clear. */
char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;
    
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else // must have words[i] == '\0'
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}

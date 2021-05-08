/*
 * Chapter10: chapter10.c
 * Julie Luscomb - Oct 1, 2017, 1:32:47 PM
 */

#include <stdio.h>   //header file for input/output

int menu(void);   //prototype definition
void day_mon1(void);
void no_data(void);
void somedata(void);
void day_mon2(void);
void designate(void);
void bounds(void);
void rain(void);
void pnt_add(void);
void day_mon3(void);
void sum_arr1(void);
void sum_arr2(void);
void order(void);
void ptr_ops(void);
void arf(void);
void zippo1(void);
void zippo2(void);
void array2d(void);
void vararr2d(void);
void flc(void);


int main(void)
{
    int selection = menu();  //variable declaration and initialization via call to menu()
    //The line above also serves as the 'priming' read for the following while loop
    
    
    while(selection != 99) {
    
        // The switch statement is similar to a chained if-else except conditions fall through in C!
        switch(selection) {

        case 1:
           day_mon1();
           break;  
           
        case 2:
            no_data(); 
            break;
         
        case 3:  
            somedata();  
            break;
            
        case 4:
            day_mon2(); 
            break;   

        case 5:
            designate(); 
            break;            
           
        case 6:  
            bounds(); 
            break;           

        case 7:  
            rain();  
            break;

        case 8:
           pnt_add();   
            break;  
           
        case 9:
           day_mon3(); 
            break;
         
        case 10:  
            sum_arr1();
            break;
           
        case 11:  
            sum_arr2();
            break;           

        case 12:
            order();
            break;                  
         
        case 13:  
            ptr_ops();
            break;
           
        case 14:  
            arf();
            break;           

        case 15:
            zippo1();
            break;
         
        case 16:  
            zippo2();
            break;
           
        case 17:  
            array2d();
            break;           

        case 18:
            vararr2d();
            break;
         
        case 19:  
            flc();
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
    printf(" 1. day_mon1\n");
    printf(" 2. no_data\n");
    printf(" 3. somedata \n");
    printf(" 4. day_mon2\n");
    printf(" 5. designate \n");
    printf(" 6. bounds\n");
    printf(" 7. rain\n");
	printf(" 8. pnt_add\n");
    printf(" 9. day_mon3 \n");
    printf("10. sum_arr1\n");
    printf("11. sum_arr2\n");
    printf("12. order \n");
    printf("13. ptr_ops \n");    
    printf("14. arf\n");
    printf("15. zippo1 \n");
    printf("16. zippo2 \n");
    printf("17. array2d\n"); 
    printf("18. vararr2d\n");
    printf("19. flc\n");
	
    printf("99. Exit\n");
    printf("Please select number and press enter:\n");
    printf("***************************\n");
    scanf("%d", &choice);
    return choice;   
}


/*
 * Chapter5: chapter5.c
 * Julie Luscomb - Aug 14, 2017, 1:32:47 PM
 */

#include <stdio.h>   //header file for input/output

int menu(void);   //prototype definition
void shoes1(void);
void shoes2(void);
void golf(void);
void squares(void);
void wheat(void);
void divide(void);
void rules(void);
void size_of(void);
void min_sec(void);
void add_one(void);
void post_pre(void);
void bottles(void);
void addemup(void);
void convert(void);
void pound_main(void);
void running(void);


int main(void)
{
    int selection = menu();  //variable declaration and initialization via call to menu()
    //The line above also serves as the 'priming' read for the following while loop
    
    
    while(selection != 99) {
    
        // The switch statement is similar to a chained if-else except conditions fall through in C!
        switch(selection) {

        case 1:
           shoes1();
           break;  
           
        case 2:
            shoes2();
            break;
         
        case 3:  
            golf();
            break;
            
        case 4:
            squares();
            break;               
           
        case 5:  
            wheat();
            break;           

        case 6:  
            divide();
            break;

        case 7:
            rules();
            break;  
           
        case 8:
            size_of();
            break;
         
        case 9:  
            min_sec();           
            break;
           
        case 10:  
            add_one();
            break;           

        case 11:
            post_pre();
            break;    
                    
        case 12:  
            bottles();
            break;

        case 13:
            addemup();
            break;  
           
        case 14:
            convert();
            break;       
           
        case 15:  
            pound_main();
            break;

        case 16:
            running();
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
    int choice = 0;
    printf("***************************\n");
    printf(" 1. Shoes1 \n");
    printf(" 2. Shoes2 \n");
    printf(" 3. Golf \n");
    printf(" 4. Squares \n");
    printf(" 5. Wheat \n");
    printf(" 6. Divide \n");
    printf(" 7. Rules \n");
    printf(" 8. Size Of \n");
    printf(" 9. Min Sec \n");
    printf("10. Add One \n");
    printf("11. Post Pre \n");
    printf("12. Bottles \n");    
    printf("13. Addemup \n");
    printf("14. Convert  \n");
    printf("15. Pound Main \n");
    printf("16. Running \n");
    printf("17. --- \n");  
 
    printf("99. Exit\n");
    printf("Please select number and press enter:\n");
    printf("***************************\n");
    scanf("%d", &choice);
    return choice;   
}
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define CUTOFF1 300.0
#define CUTOFF2 450.0
#define BASE1 (RATE1 * CUTOFF1)  //45
#define BASE2 (BASE1 + (RATE2 *(CUTOFF2 - CUTOFF1)))  //75
#define HRRATE 10.0

void paycheck(void){
    float hr, grosspay, amount1, amount2, tax1, tax2, tax3, totaltax, netpay; // floated hours because if you work half an hour you cannot put it in an integer
     
    
    printf("Enter in the numbers of hours worked for the week: ");
    scanf("%f", &hr);
    
    if(hr <= 40)
        grosspay = HRRATE * hr;
    else
        grosspay = (HRRATE * 40) + ((hr - 40) * HRRATE * 1.5);
  
    if(grosspay <= 300){
        tax1 = grosspay * RATE1;  //30
        netpay = grosspay - tax1;  //170
        printf("%.1f hours: $%.2f gross pay, taxes at 15%% which is $%.2f, net pay = $%.2f\n", hr, grosspay, tax1, netpay); 
    }
    else if(grosspay <= 450){
        amount1 = grosspay - CUTOFF1;  //100
        tax1 = (grosspay - amount1) * RATE1;  //45
        tax2 = amount1 * RATE2;  //20
        totaltax = BASE1 + ((grosspay - CUTOFF1) * RATE2);  //65
        netpay = grosspay -(tax1 + tax2);  //335
        printf("%.1f hours: $%.2f gross pay, taxes at 15%% for first $%.2f ($%.2f), plus 20%% for $%.2f ($%.2f) - total is $%.2f, net pay = $%.2f\n"
                , hr, grosspay, CUTOFF1, tax1, amount1, tax2, totaltax, netpay);
    }
    else{
        amount1 = grosspay - CUTOFF2;  //250
        amount2 = (grosspay - CUTOFF1) - amount1;  //150
        tax1 = (grosspay - (amount1 + amount2)) * RATE1;  //45
        tax2 = amount2 * RATE2;  //30
        tax3 = amount1 * RATE3; //62.5
        totaltax = BASE2 + ((grosspay - CUTOFF2) * RATE3);  //137.5
        netpay = grosspay - (tax1 + tax2 + tax3);  //562.5
        printf("%.1f hours: $%.2f gross pay, taxes at 15%% for first $%.2f ($%.2f), plus 20%% for $%.2f ($%.2f), plus 25%% of remaining $%.2f ($%.2f) - total is $%.2f, net pay = $%.2f\n"
                , hr, grosspay, CUTOFF1, tax1, amount2, tax2, amount1, tax3, totaltax, netpay);
    }

}
    

    
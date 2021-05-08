/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void prntval(void){
    int boilPt = 212;
    int rtnVal;
    
    rtnVal = printf("The boiling point "
            "of water is %d F.\n", boilPt);
    printf("The return value is %d.\n", rtnVal);
}
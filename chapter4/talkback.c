/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <string.h> // for the strlen() funciton
#define DENSITY 64.4 

void talkback(void){
    float weight, volume; 
    int size, letters;
    char c; 
    char name[40]; //sting in C - 0 an array of characters
    
    printf("Hi! What's your name?\n");
    scanf("%s", name); //name of array is pointer to mem address
    while ((c = getchar()) !=EOF && c !='\n')
        printf("%c", c);
    printf("What is your weight in pounds?\n");
    scanf("%f", &weight);
    volume = weight/DENSITY;
    letters = strlen(name);
    size = sizeof name;
    printf("Well, %s, your volume is %2.2f cubic feet\n", name, volume);
    printf("Your name has %d letters.\n", letters);
    printf("And it takes %zu bytes.\n", size);
}
